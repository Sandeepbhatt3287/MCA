#include <iostream>
using namespace std;

class first
{
	int x;
public:
	first() { cout << "First's constructor called " << endl; }
};

class second
{
	static first a;
public:
	second() { cout << "second's constructor called " << endl; }
	static first getfirst() { return a; }
};

first second::a; // definition of first

int main()
{
	// static member 'first' is accessed without any object of second
	first a = second::getfirst();

	return 0;
}

