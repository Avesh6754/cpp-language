#include<iostream>
#include<string.h>

using namespace std;

class Vote
{
	string pass;
	public:
		void vote()
		{
			cout<<"Enter your password : ";
			getline(cin,pass);
			
			int len=pass.length();
			for(int i=0;i<len;i++)
			{
				if(pass[i]>64 && pass[i]<91)
				{
					throw pass;
				}
				else
				{
					throw 0;
				}
			}
		}
	
};
main()
{
//	Q.1 Write a Program to create a class that illustrates the concept of handling all 
//types of exceptions using general exceptions.
	Vote v1;
	try
	{
		v1.vote();
	}
	catch(string y)
	{
		cout<<" "<<y<<"! Your password valid "<<endl;
	}
	catch(int x)
	{
		cout<<" "<<x<<" Please enter uppercase letter : "<<endl;
	}
}