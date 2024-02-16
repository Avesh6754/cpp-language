#include<iostream>
//Without using operator overloading;
//second logic;

using namespace std;

class A
{
	int num;
	public:
		void set()
		{
			cout<<"Enter the value of num : ";
			cin>>num;
			
		}
		void get()
		{
			cout<<"sum of two object : "<<num<<" ";
		}
		A sum(A &n2)
		{
			A temp;
			temp.num=num+n2.num;
			return temp;
		}
		
};
main()
{
	A n1,n2,n3;
	n1.set();
	n2.set();
	n3=n1.sum(n2);
	n3.get();
}
 
