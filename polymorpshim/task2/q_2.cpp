#include<iostream>
//Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.
// ++,-

using namespace std;
class Math
{
	int a;
	public:
		void set()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
		
		}
		void get()
		{
			cout<<"value of A : "<<a<<" "<<endl;

		}
		Math operator>(Math &m2)
		{
			Math temp;
			int x;
			//5<10
			
			
			if(a<m2.a)
			{
				temp.a=m2.a;
			}
			else
			{
				temp.a=a;
				
			}
			return temp;
		}
		
	
};
main()
{
	Math m1,m2,m3;
	m1.set();
	m2.set();
	m3=m1>m2;
	m3.get();
}

