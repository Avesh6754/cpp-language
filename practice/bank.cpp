#include<iostream>
using namespace std;

class Bank
{
	int balance,withdraw_amount,deposite_amount;
	public:
	
	void input()
	{
		
		balance=10000;
		cout<<"Balance : "<<balance<<endl;
		start:
		cout<<"Enter the deposite amount : "<<endl;
		cin>>deposite_amount;
		if(deposite_amount>0)
		{
			balance+=deposite_amount;
			cout<<"Total balance :"<<balance<<endl;
			
			output();	
		}
		else
		{
			cout<<"Enter the positive number amount : "<<endl;
			goto start;
		}
		
	}
	void output()
	{
		sta:
		cout<<"Enter the withdraw amount : ";
		cin>>withdraw_amount;
		if(withdraw_amount>0)
		{
			balance-=withdraw_amount;
			cout<<"current balance :"<<balance;
			
		}
		else
		{
			cout<<"Enter the positive number amount : "<<endl;
			goto sta;
		}
		
	}
	
};
main()
{
	Bank b;
	b.input();
}
