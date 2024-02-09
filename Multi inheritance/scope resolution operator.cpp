//Q.2 Write a Program to demonstrate the use of a scope resolution operator to solve ambiguity errors.

#include<iostream>
using namespace std;

class A{
	protected:
		int a;
		void set()
		{
			cout<<"Entre the value of a : ";
			cin>>a;	
		}
};
class B{
	protected:
		int a;
		void set()
		{
			cout<<"Enter value of a : ";
			cin>>a;	
		}
};
class C:public A,public B
{
	int b;
	public:
	
		void setter()
		{
			A::set();
			B::set();
			cout<<"Enter the number for choice : ";
			cin>>b;
			
		}
		void getter()
		{
			if(b>0)
			{
				cout<<"A1 = "<<A::a<<" "<<endl;
				
			}
			else
			{
				cout<<"A2 = "<<B::a<<" "<<endl;
			}
			
		}
};
main()
{
	C c1;

	c1.setter();
	c1.getter();
}
