// Define a class named `BankAccount` with private attributes `accountNumber`, `balance`, and `ownerName`. 
// Encapsulate these attributes using appropriate access specifiers. Implement public member functions to credit, debit, and display the balance.
//  Demonstrate encapsulation by interacting with the class through its member functions.

#include<iostream>

using namespace std;

class BankAccount
{
	int balance,withdraw,deposite;
	static long long int accountNumber;
	static string ownerName;
		public:
			void set()
			{
				balance=10000;
				cout<<"------------------------------------------"<<endl;
				cout<<"Enter the amount to withdraw : ";
				cin>>withdraw;
				balance-=withdraw;
				cout<<"Total Amount After withdraw : "<<withdraw<<" "<<endl;
			}
			void get()
			{
				cout<<"------------------------------------------"<<endl;
				cout<<"Enter the amount to deposite : ";
				cin>>deposite;
				balance+=deposite;
			}
	
};
long long int BankAccount::accountNumber=696695854;
string BankAccount::ownerName="Avesh Kumar ";
main()
{
	BankAccount b1;
	b1.set();
	b1.get();
}
