#include<iostream>
//Without using operator overloading and without using n1.sum(n2);
//third logic;
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
		void sum(A &n1 ,A &n2)
		{
			num=n1.num+n2.num;
		}
		
};
main()
{
	A n1,n2,n3;
	n1.set();
	n2.set();
	n3.sum(n1,n2);
	n3.get();
}
 
