#include<iostream>
//Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.
// ++,-

using namespace std;
class Math
{
	int a,b;
	public:
		void set()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
			cout<<"Entre the value of b : ";
			cin>>b;	
		}
		void get()
		{
			cout<<"value of A : "<<a<<" "<<endl;
			cout<<"value of B : "<<b<<" "<<endl;
		}
		Math operator+(Math &m2)
		{
			Math temp;
			int x=a-m2.a;
			int y=b-m2.b;
			temp.a=x;
			temp.b=y;
			return temp;
		}
		
	
};
main()
{
	Math m1,m2,m3;
	m1.set();
	m2.set();
	m3=m1+m2;
	m3.get();
}

