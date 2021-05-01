#include<iostream>
using namespace std;
class Largest
{
        private:
                int First_no,Second_no,Third_no;
    public:
        void input()
        {
                cout<<"\nEnter First no. :";
                cin>>First_no;
                cout<<"\nEnter Second no. :";
                cin>>Second_no;
                cout<<"\nEnter Third no. :";
                cin>>Third_no;
        }
        void calc()
        {
                int largest;
                
                largest=((First_no>=Second_no)&&(First_no>=Third_no)?
				First_no:(Second_no>=First_no)&&(Second_no>=Third_no)?
				Second_no:Third_no);
				
                cout<<"\nLargest number :"<<largest;
        }
};
int main()
{
        Largest l;
        l.input();
        l.calc();
        
}
