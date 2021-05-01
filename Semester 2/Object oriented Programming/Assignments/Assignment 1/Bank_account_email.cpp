#include<iostream>
using namespace std;
class Bank_Account
{
	private:
		string name;
		int a_number;
		string type;
		float balance;
	public:
		Bank_Account(string name,int a_number,string type,float balance)
		{
			this->name=name;
			this->a_number=a_number;
			this->type=type;
			this->balance=balance;
		}
		void deposit(int d_amount)
		{
			this->balance=this->balance+d_amount;
			cout<<"Amount sucessfully deposited"<<endl;
		}
		void withdraw(int w_amount)
		{
			if(this->balance-w_amount>5000)
				this->balance=this->balance-w_amount;
			else
				cout<<"Current balance not sufficient"<<endl;
		}
		void display()
		{
			cout<<"Name:"<<this->name<<endl;
			cout<<"Current balance:"<<this->balance<<endl;
		}
};
int main()
{
	string id="",pass="";
	int chance=0;
	while(id!="Sandeep051"&&pass!="S051")
	{
		if(chance!=0)
			cout<<"Worng id or password!!\nPlease try again"<<endl;
		if(chance==3)
		{
			cout<<"Please try again later"<<endl;
			return 0;
		}
		cout<<"Enter your id:";
		cin>>id;
		cout<<"Enter your password:";
		cin>>pass;
		chance++;
	}
	Bank_Account obj("Sandeep",1234,"savings",50000);
	char c='Y';
	int choice,amount;
	do
	{
		cout<<"1.Deposit an amount"<<endl;
		cout<<"2.Withdraw an amount"<<endl;
		cout<<"3.Display"<<endl;
		cout<<"4.Quit"<<endl;
		cout<<"Enter you choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the amount to deposit:";
				cin>>amount;
				obj.deposit(amount);
				break;
			case 2:
				cout<<"Enter the amount to withdraw:";
				cin>>amount;
				obj.withdraw(amount);
				break;
			case 3:
				obj.display();
				break;
			case 4:
				c='N';
				break;
			default:
				cout<<"Wrong choice"<<endl;
				c='N';
				break;
		}
	}while(c=='Y'||c=='y');
	cout<<"Thanks for visiting!"<<endl;
	return 0;
}
