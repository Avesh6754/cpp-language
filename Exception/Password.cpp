//Questions:
//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
//- a person cannot be able to vote if his/her age is less than 18
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>
#include<string.h>
using namespace std;

main()
{
	string Password;
	cout<<"Enter your Password : ";
	cin>>Password;
	
	int len= Password.length();
	int check=0;
	for(int i=0;i<=len;i++)
	{
		if(Password[i]>=65&&Password[i]<=90)
		{
			check=1;
		}
	}

	try
	{
		if(check!=1)
		{
			throw Password;
		}
		else
		{
			cout<<"Password validate :: "<<endl;
		}
	}
	catch(...)
	{
		cout<<" "<< " Password cannot be validated if it does not contains an uppercase letter "; 
	}
}
