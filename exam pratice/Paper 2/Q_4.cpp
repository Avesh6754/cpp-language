// Overload the `+` operator for the `BankAccount` class to display account details.
//  Create two `BankAccount` objects and demonstrate the use of the overloaded `+` operator to display total amount of both accounts.

#include<iostream>
using namespace std;

class BankAccount
{
	int amount ;
	long long int accountNumber;
	string ownerName;
	public:
		void set()
		{
			cout<<"------------------------------------------"<<endl;
			cout<<"Enter the bank account holder deatils : "<<" "<<endl;
			cout<<"Enter the owner Name : ";
			cin.ignore();
			getline(cin,ownerName);
			cout<<"Entre the Account number : ";
			cin>>accountNumber;
			cout<<"Enter the Amount : ";
			cin>>amount;
		}
		void get()
		{

			cout<<"Total amount  : "<<amount<<" ";
		}
		BankAccount operator+(BankAccount &b2)
		{
			BankAccount temp;
			int x=this->amount+b2.amount;
			temp.amount=x;
			return temp;
		}
};
main()
{
	BankAccount b1,b2,b3;
	b1.set();
	b2.set();
	b3=b1+b2;
	b3.get();
}

