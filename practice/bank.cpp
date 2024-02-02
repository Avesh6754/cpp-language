#include<iostream>
using namespace std;

class Bank
{
	int balance=10000,withdraw_amount,deposite_amount;
	public:
	
	void input()
	{
		cout<<"Balance : "<<balance<<endl;
		cout<<"Enter the deposite amount : "<<endl;
		cin>>deposite_amount;
		
		balance+=deposite_amount;
		cout<<"Total balance :"<<balance<<endl;
	}
	void output()
	{
		cout<<"Enter the withdraw amount : ";
		cin>>withdraw_amount;
		
		balance-=withdraw_amount;
		cout<<"current balance :"<<balance;
	}
	
};
main()
{
	Bank b;
	b.input();
	b.output();
	
}