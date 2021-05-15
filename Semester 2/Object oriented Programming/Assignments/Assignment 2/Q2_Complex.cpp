#include<iostream>
using namespace std;

class Complex
{
        int num1, num2;
    public:
        void accept()
        {
                cout<<"\n Enter Two Complex Numbers : ";
                cin>>num1>>num2;
        }

        //Overloading '+' operator using Friend function
        friend Complex operator+(Complex c1, Complex c2);   
                           
        void display()
        {
                cout<<num1<<"+"<<num2<<"i"<<"\n";
        }
};
Complex operator+(Complex c1, Complex c2)
{
        Complex c;
        c.num1=c1.num1+c2.num1;
        c.num2=c1.num2+c2.num2;
        return(c);
}
int main()
{
        //Created Object of Class Complex c1 and c2
        Complex c1,c2, sum;  
		    

		//Accepting the values
        c1.accept();  
        c2.accept();

		//Addition of object
        sum = c1+c2;   
    
        cout<<"\n Entered Values : \n";
        
        //Displaying user input values
        c1.display();    
        c2.display();
  
        cout<<"\n Addition of Real and Imaginary Numbers : \n";
        //Displaying the addition of real and imaginary numbers
		sum.display();  
        
     
        return 0;
}
