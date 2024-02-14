#include<iostream>
using namespace std;

class A 
{
	protected:
		int a;
		void setter()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
		}
	
};
class B: public A
{
	protected:
		int a;
		void setter()
		{
			cout<<"Enter the value of a : ";
			cin>>a;	
		}
};
class C:public B
{
	public:
		int choice;
		void setter()
		{
			A::setter();
			B::setter();
			cout<<"Enter the 1 to choice print A : "<<endl;
			cout<<"Enter other number to Choice print B : "<<endl;
			cout<<"Enter your choice : ";
			cin>>choice;	
			
		}
		
		void getter()
		{
			if(choice==1)
			{
				cout<<"A = "<<A::a<<endl;
			}
			else
			{
				cout<<"B = "<<B::a<<endl;
			}
		}
};
main()
{
	C s1;
	s1.setter();
	s1.getter();
}
