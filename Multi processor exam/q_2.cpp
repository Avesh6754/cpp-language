//
//Questions:
//Q.1 Write a Program to create a Message class with a constructor that takes a single string with a default value. Create a private member of the typed string, and in the constructor simply assign the argument string to your internal string. Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the variable and one that takes a string argument, which it prints in addition to the internal message.
//
//Q.2 Write a Program to add two distances using binary plus (+) operator overloading.
//
//For example,
//Input:
//input1 => Km: 3, Meter: 1020
//input2 => Km: 2, Meter: 2050
//
//Output:
//Km: 8, Meter: 70
#include<iostream>

using namespace std;

class Math
{
	int km,meter;
	public:
	void set()
	{
		cout<<"Enter the km value : ";
		cin>>km;
		cout<<"Enter the meter value : ";
		cin>>meter;
		
	}
	void get()
	{
		cout<<"Value of km : "<<km<<" "<<endl;
		cout<<"Value of Meter : "<<meter<<" "<<endl;
	}
	Math operator+(Math &m2)
	{
		Math obj;
		int obj1=this->meter+m2.meter;
		int total=obj1/1000;
		int Total=obj1%1000;
		total=total+this->km+m2.km;
		
		obj.km=total;
		obj.meter=Total;
		return obj;
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
