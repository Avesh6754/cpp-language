//Questions:
//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
//- a person cannot be able to vote if his/her age is less than 18
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>

using namespace std;

main()
{
	int age;
	cout<<"Enter the value of age : ";
	cin>>age;

	try
	{
		if(age<18)
		{
			throw age;
		}
		else if(age>114)
		{
			throw age;
		}
		else
		{
			cout<<"You are eligible for vote"<<endl;
		}
	}
	catch(int x)
	{
		cout<<" "<<x<< "   You are not eligible for vote: "; 
	}
}
