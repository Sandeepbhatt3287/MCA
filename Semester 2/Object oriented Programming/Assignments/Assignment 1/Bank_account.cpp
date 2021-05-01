#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class bank_account
{
        int acno;
        char nm[100], acctype[100];
        float bal;  
   public:
        bank_account(int acc_no, char *name, char *acc_type, float balance)  //Parameterized Constructor
        {
                acno=acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
};
void bank_account::deposit()   //depositing an amount
{
        int deposit_amount;
        cout<<"\n Enter Deposit Amount = ";
        cin>>deposit_amount;
        bal+=deposit_amount;
}
void bank_account::withdraw()  //withdrawing an amount
{
        int withdraw_amount;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>withdraw_amount;
        if(withdraw_amount>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=withdraw_amount;
}
void bank_account::display()  //displaying the details
{
        cout<<"\n ----------------------";
//        cout<<"\n Accout No. : "<<acno;
        cout<<"\n Name : "<<nm;
//        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;  
}
int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
  
        bank_account b1(acc_no, name, acc_type, balance);  //object is created
        b1.deposit(); //calling member functions
        b1.withdraw(); // calling member functions
        b1.display(); //displaying the outcome
        return 0;
}
