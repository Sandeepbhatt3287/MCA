#include<iostream>

using namespace std;

class shape{
public:
 virtual void area(){};
 virtual void display(){};
};

class circle:public shape{
 double radius;
public:
 void getdata();
 void display();
 void area();
};

class rectangle:public shape{
  double width, length;
 public:
  void getdata();
  void display();
  void area();
};

class triangle:public shape{
 double base, height;
public:
 void getdata();
 void display();
 void area();

};

void circle::getdata()
{
    cout << endl << "Enter radius of circle : ";
    cin >> radius;
}
void circle::display()
{
    cout << endl << endl << "Shape : Circle" << endl << "Radius: " << radius;
}
void circle::area()
{
 cout << endl << "Area  : " << 3.14159 * radius * radius;
}
void rectangle::getdata()
{
    cout << endl << "Enter width of Rectangle : ";
    cin >> width;
    cout << "Enter lenght of Rectangle : ";
    cin >> length;
}
void rectangle::display()
{
    cout << endl << endl << "Shape : Rectangle" << endl << "Width : " << width << endl << "Lenght: " << length;
}
void rectangle::area()
{
 cout << endl << "Area  : " << width * length;
}

void triangle::getdata()
{
    cout << endl << "Enter triangle base : : ";
    cin >> base;
    cout << "Enter height : ";
    cin >> height;
}
void triangle::display()
{
    cout << endl << "Shape : Trianlge" << endl << "Base : " << base << endl << "Height :"<< height <<endl;
}
void triangle::area()
{
 cout << endl << "Area  : " << ((base *height) / 2);
}

int main()
{
    shape* p;
    circle c;
    rectangle r;
    triangle t;

    p = &c;
    c.getdata();
    p = &r;
    r.getdata();
    p = &t;
    t.getdata();

    p = &c;
    p->display();
    p->area();
    
    p = &r;
    p->display();
    p->area();
    
    p = &t;
    p->display();
    p->area();
    
    return 0;
}
