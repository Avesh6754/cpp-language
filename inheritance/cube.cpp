#include<iostream>
using namespace std;
/*Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
- Class X has the following members: a, b & c attributes in integer data type
- Class Y has the following members: setData() and getData() methods*/

class A
{
	protected :
		int a;
};
class B:public A
{
		protected :
		int b;
};
class C :public B
{
	public:
	int c,sum=0;
	void set()
	{
		cout<<"Enter the value of a : ";
		cin>>a;
		cout<<"Enter the value of b : ";
		cin>>b;
		cout<<"Enter the value of c : ";
		cin>>c;
	}
	void get()
	{
		sum=(a*a*a)+(b*b*b)+(c*c*c);
		cout<<"Sum of cubes : "<<sum;
	}
};
main()
{
	C c1;
	c1.set();
	c1.get();
}
