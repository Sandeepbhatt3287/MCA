#include<iostream>
#include<iomanip>

using namespace std;

class dist{
  int inches;
  int feets;

public:
  void getdata();
  float getInches(){ return inches; };
  float getFeets(){ return feets; }
  operator float()
  {
      float totalFeets;
      totalFeets = feets + inches*1/12;

      return totalFeets*1/3.28;
  }
};

void dist::getdata()
{
  cout << endl << "Enter distance in  inches : ";
  cin >> inches;
  cout << "Enter distance in feets : ";
  cin >> feets;
}

int main()
{
  dist d;
  float m;

  d.getdata();
  m = d;
  cout << endl << "Meters(" << d.getFeets() << " F + " << d.getInches() << " I) = " << m;
  
  return 0;
}
