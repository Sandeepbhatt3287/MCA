#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inch;
public:
    Distance() : feet(0), inch(0) {};
    Distance(int ft, int in) : feet(ft) {
        feet += in / 12;
        inch = in % 12;
    };

    void getdata(int ft, int in) {
        feet = ft + in / 12;
        inch = in % 12;
    };


    void show() {
        cout << feet << " ft  " << inch << " in" << endl;
    };

    Distance& operator+=(const Distance& r) {
        feet += r.feet;
        inch += r.inch;
        feet = feet + inch / 12;
        inch = inch % 12;
        return *this;
    };


    friend bool operator<(const Distance& l, const Distance& r) {
        return l.feet * 12 + l.inch < r.feet * 12 + r.inch;
    };
};

int main()
{
    Distance d1;
    Distance d2(7, 18);
    cout << "d1 = ";  d1.show();
    cout << "d2 = "; d2.show();
    cout << "d1.getdata(3, 1);" << endl;
    cout << "d2 += Distance(1,0);" << endl;
    d1.getdata(5, 5);
    d2 += Distance(4, 1);
    if (d1 < d2) {
        cout << "Distance d1 is less than d2." << endl;
    }
    else {
        cout << "Distance d1 not less than d2." << endl;
    }

    cout << "d2.show();" << endl;
    d2.show();
}
