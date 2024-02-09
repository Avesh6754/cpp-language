//Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
//- Class P has the following members: temperature attribute in float
//- Class Q has the following members: toFehrenheit() method
//- Class R has the following members: toKelvin() method.

#include<iostream>

using namespace std;

class P
{
	protected:
	int n;
};
class Q :public P
{
	protected:
	//(32°C × 9/5) + 32 = 89.6°F
			int f;
			void set()
			{
				cout<<"Enter the value of n : ";
				cin>>n;
			}
			void get()
			{
				f=(n*9/5)+32;
				cout<<"Fahrenheit = "<<f<<endl;
			}
	
};
class R : public Q
{
	int k;
	public:
		//K = (F - 32) × 5 / 9 + 273.15.
		void setter()
		{
			set();
			get();
			k=(f-32)*5/9+273.15;
			
		}
		void getter()
		{
			setter();
			cout<<"Kelvin = "<<k;
		}
};

main()
{
	R a1;
	a1.getter();
}
