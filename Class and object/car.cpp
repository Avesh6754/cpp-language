//Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year
#include<iostream>
#include<string.h>
using namespace std;

class Car
{
	public:
  	int  car_id,car_release_year;
	string car_company_name,car_color,line,car_model;
	
		void input()
		{
		 	getline(cin,line);
			cout<<"Enter your Car company name : ";
			getline(cin,car_company_name);
			cout<<"Enter your release year : ";
		 	cin>>car_release_year;
		 	getline(cin,line);
		 	cout<<"Enter your Car color : ";
			getline(cin,car_color);
			cout<<"Enter your id : ";
		 	cin>>car_id;
			getline(cin,line);
			cout<<"Enter your Car model : ";
			getline(cin,car_model);
	
   		}
   		void output()
   		{
   			cout<<" car_id :"<<car_id<< endl;
   			cout<<" car_release_year :"<<car_release_year<< endl;
			cout<<" car_color :"<<car_color<< endl;
			cout<<" car_model :"<<car_model<< endl;
			cout<<" car_company_name :"<<car_company_name<< endl;
   			
		}
};
main()
{
	int n,i;
	cout << "enter the size of n " ;
	cin>>n;
	Car c[n];
	for(i=0;i<n;i++)
	{
		
		c[i].input();
		c[i].output();
	}

}
