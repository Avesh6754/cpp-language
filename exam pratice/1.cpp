//Define a class named Rectangle with private attributes length and width. 
//Create an object of the Rectangle class and demonstrate the functionality of the implemented methods.
//Implement public member functions to set and get the values of these attributes. 
//Include a method to calculate the area of the rectangle. 

#include<iostream>

using namespace std;

class Rectangle
{
	int length,width;
	public:
		void set()
		{
			cout<<"Enter the value of length : ";
			cin>>length;
			cout<<"Enter the value of width : ";
			cin>>width;
			
		}
		void get()
		{
			cout<<"Length : "<<length<<" "<<endl;
			cout<<"width : "<<width<<" "<<endl;
		}
		
		void Area()
		{
			cout<<"total area of rerctangle : "<<length*width<<" "<<endl;
		}
};
main()
{
	Rectangle r1;
	r1.set();
	r1.get();
	r1.Area();
}
