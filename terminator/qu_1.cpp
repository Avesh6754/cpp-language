#include<iostream>

using namespace std;

class Vote
{
	int n;
	public:
		string one="You are not eligible for vote : ";
		void vote()
		{
			cout<<"Enter the age of person : ";
			cin>>n;
			if(n>=18)
			{
				throw n;
			}
			else
			{
				throw one;
			}
		}
	
};
main()
{
//	.2 Write a Program to throw 0 if the age of the user is less than 18, 
//	otherwise print that you are eligible to vote.
//	 Also, handle that thrown exception and print you are not eligible to vote.

	Vote v1;
	try
	{
		v1.vote();
	}
	catch(int y)
	{
		cout<<" "<<y<<" You are eligible for vote "<<endl;
	}
	catch(string y)
	{
		cout<<" "<<y<<" "<<endl;
	}
}