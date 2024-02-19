// Define a class named `BankAccount` with private attributes `accountNumber`, `balance`, and `ownerName`. 
// Encapsulate these attributes using appropriate access specifiers. Implement public member functions to credit, debit, and display the balance.
//  Demonstrate encapsulation by interacting with the class through its member functions.

#include<iostream>

using namespace std;

class BankAccount
{
	int balance,withdraw,deposite;
	static long long  accountNumber;
	static string ownerName;
		private:
			void Debit()
			{
				balance=10000;
				cout<<"Total Amount : "<<balance<<" "<<endl;
				st:
				cout<<"------------------------------------------"<<endl;
				cout<<"Enter the amount to withdraw : ";
				cin>>withdraw;
				if(withdraw<=balance)
				{
					balance-=withdraw;
					cout<<"Total Amount After withdraw : "<<balance<<" "<<endl;
				}
				else
				{
					cout<<"You balance in Bank : "<<balance<<" "<<endl;
					goto st;
				}
			}
			void Credit()
			{
				balance=10000;
				cout<<"Total Amount : "<<balance<<" "<<endl;
				cout<<"------------------------------------------"<<endl;
				cout<<"Enter the amount to deposite : ";
				cin>>deposite;
				balance+=deposite;
				cout<<"Total Amount After deposite : "<<balance<<" "<<endl;
			}
			public:
			void Display()
			{
				long long AccountNumber;
				int n;
				cout<<"You account number : "<<accountNumber<<endl;
				start:
				cout<<"Enter the account number to verfiy you account : ";
				cin>>AccountNumber;
				if(AccountNumber==accountNumber)
				{
					
					cout<<"Your Account number is verify :  "<<endl;
					cout<<"Welcome to Bank service : "<<ownerName<<endl;
					
					star:
					st:
					cout<<"Enter your choice between Deposite and Withdraw : "<<endl;
					cout<<"Enter 1 -> Withdraw And entre 2-> for Deposite : ";
					cin>>n;
				
						
						if(n==2)
						{
							Credit();
							goto st;
						}
						else if(n==1)
						{
							Debit();
							goto st;
						}
						else
						{
							cout<<"Please entre the number 1 and 2 : "<<endl;
							goto star;
						}
				
					
				}
				else
				{
					cout<<"Please entre the correct Account number : "<<endl;
					goto start;
				}
				
			}
					
};
long long BankAccount::accountNumber=12345;
string BankAccount::ownerName="Avesh Kumar ";
main()
{
	BankAccount b1;
	b1.Display();
}
