//Questions:
//Q.1 Write a Program that defines a shape class with a constructor 
//that gives value to width and height. Then define two sub-classes triangle and
// rectangle, that calculate the area of the shape area (). In the main, define two objects a 
//triangle and a rectangle, and then call the area() function using these two objects.
#include<iostream>
using namespace std;

class Area
{
	public:
		int height,width;
		void set()
		{
			cout<<"Enter the value of height : ";
			cin>>height;
			cout<<"Entre the value of width  : ";
			cin>>width;
			
		}
};
class Rectangle:public Area
{
	public :
		int area1;
		void get()
		{
			set();
			area1=width*height;
			cout<<"The area of rectangle : "<<area1<<" "<<endl;
		}
	
};
class Triangle:public Area
{
	public:
		int area;
		void get()
		{
			set();
			area=(width*height)/2;
			cout<<"The area of rectangle : "<<area<<" "<<endl;
			
		}
	
};
main()
{
	Rectangle r1;
	r1.get();
	Triangle t1;
	t1.get();
}
