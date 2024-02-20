//Questions:
//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//- the area of a circle
//- the area of a triangle
//- the area of a rectangle
//- use one single pure virtual function named calculate() to perform all the above operations


#include<iostream>

using namespace std;

class Shape
{
	protected:
	int area,r, b,h;
	static float pi;
		public:
		virtual void calculate()=0;
};
class circle:public Shape
{
	public:
		void calculate()
		{
			cout<<"Enter the radius : ";
			cin>>r;
			
			area=pi*(r*r);
			
			cout<<"Area of Circle "<<area<<" "<<endl;
			
		}
};
class triangle:public Shape
{
	public:
		void calculate()
		{
			cout<<"Enter the base : ";
			cin>>b;
			cout<<"Enter the heigth : ";
			cin>>h;
			
			area=(h*b)/2;
			
			cout<<"Area of Circle "<<area<<" "<<endl;
			
		}
};
class rectangle:public Shape
{
	int b,h;
	public:
		void calculate()
		{
			cout<<"Enter the base : ";
			cin>>b;
			cout<<"Enter the heigth : ";
			cin>>h;
			
			area=(h*b);
			
			cout<<"Area of Circle "<<area<<" "<<endl;
			
		}
	
};
float Shape::pi=3.14;

main()
{
	circle s1;
	s1.calculate();
	triangle t1;
	t1.calculate();
	rectangle r1;
	r1.calculate();
}
