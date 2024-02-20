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
				balance=1000;
				cout<<endl<<"Total Amount : "<<balance<<" "<<endl;
				st:
				cout<<"------------------------------------------"<<endl;
				cout<<"Enter the amount to withdraw : ";
				cin>>withdraw;
				if(withdraw>0)
				{
					if(withdraw<=balance)
					{
						balance-=withdraw;
						cout<<endl<<"Total Amount After withdraw : "<<balance<<" "<<endl;
					}
					else
					{
						cout<<endl<<"You balance in Bank : "<<balance<<" "<<endl;
						goto st;
					}
				}
				else
				{
					cout<<endl<<"Please Enter positive number : "<<endl;
					goto st;
				}
			}
			void Credit()
			{
				balance=10000;
				cout<<endl<<"Total Amount : "<<balance<<" "<<endl;
				st:
				cout<<"------------------------------------------"<<endl;
				cout<<"Enter the amount to deposite : ";
				cin>>deposite;
				if(deposite>0)
				{
					
					balance+=deposite;
					cout<<endl<<"Total Amount After deposite : "<<balance<<" "<<endl;
				}
				else
				{
					cout<<endl<<"Please Enter positive number : "<<endl;
					goto st;
				}
			}
			public:
			void Display()
			{
				long long AccountNumber;
				int n;
				cout<<endl<<"You account number : "<<accountNumber<<endl;
				start:
				cout<<endl<<"Enter the account number to verfiy you account : ";
				cin>>AccountNumber;
				if(AccountNumber==accountNumber)
				{
					
					cout<<endl<<"Your Account number is verify :  "<<endl;
					cout<<endl<<"Welcome to Bank service : "<<ownerName<<endl;
					
					star:
					st:
					cout<<"------------------------------------------"<<endl;
					cout<<endl<<"Enter your choice between Deposite and Withdraw : "<<endl;
					cout<<endl<<"Enter 1 -> Withdraw "<<endl<<"Entre 2-> for Deposite"<<endl<<"Enter 3-> to finished process : ";
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
						else if(n==3)
						{
							cout<<endl<<"Process Finished : "<<endl;
						}
						else
						{
							cout<<endl<<"Please entre the number 1 and 2 : "<<endl;
							goto star;
						}
				
					
				}
				else
				{
					cout<<endl<<"Please entre the correct Account number : "<<endl;
					goto start;
				}
				
			}
			~BankAccount()
			{
				cout<<endl<<"Thank You Sir : "<<endl;
			}
					
};
long long BankAccount::accountNumber=12345;
string BankAccount::ownerName="Avesh Kumar ";
main()
{
	BankAccount b1;
	b1.Display();
}
