// Define a class named `BankAccount` with private attributes `accountNumber`, `balance`, and `ownerName`. 
// Encapsulate these attributes using appropriate access specifiers. Implement public member functions to credit, debit, and display the balance.
//  Demonstrate encapsulation by interacting with the class through its member functions.

#include<iostream>

using namespace std;

class BankAccount
{
	int balance;
	long long int accountNumber;
	string ownerName;
		public:
			void credit()
			{
				cout<<"------------------------------------------"<<endl;
				cout<<"Enter the bank account holder deatils : "<<" "<<endl;
				cout<<"Enter the owner Name : ";
				getline(cin,ownerName);
				cout<<"Entre the Account number : ";
				cin>>accountNumber;
				cout<<"Enter the owner balance : ";
				cin>>balance;
			}
			void debit()
			{
				cout<<"------------------------------------------"<<endl;
				cout<<" The bank account holder deatils : "<<" "<<endl;
				cout<<"Name       	 : "<<ownerName<<" "<<endl;
				cout<<"AccountNumber : "<<accountNumber<<" "<<endl;
				cout<<"Balance		 : "<<"Rs "<<balance<<" "<<endl;
			}
	
};
main()
{
	BankAccount b1;
	b1.credit();
	b1.debit();
}
