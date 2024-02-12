//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.
#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		void set()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
		}
};
class B:public A
{
	public:
		int sum=0;
		void getsquare()
		{
			set();
			sum=a*a;
			cout<<"Square of a : "<<sum<<endl;
		}
};
class C : public A
{
	public:
		int ans=0;
		void getcube()
		{
			set();
			ans=a*a*a;
			cout<<"Square of a : "<<ans<<endl;
		}
	
};
main()
{
	B b1;
	b1.getsquare();
	C s1;
	s1.getcube();

}

