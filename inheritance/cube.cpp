//Questions:
//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods
#include<iostream>
using namespace std;

class X
{
	protected:
		int a,b,c;
	
};
class Y :public X
{
	int sum=0;
	public:
		void setData()
		{
			cout<<"Emter the value of a : ";
			cin>>a;
			cout<<"Emter the value of b : ";
			cin>>b;
			cout<<"Emter the value of c : ";
			cin>>c;
			
		}
		void getData()
		{
			sum=(a*a*a)+(b*b*b)+(c*c*c);
			cout<<"Sum = "<<sum;
		}
};
main()
{
	Y y1;
	y1.setData();
	y1.getData();
}
