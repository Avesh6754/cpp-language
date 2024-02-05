//Q.1 Write a Program to make a Railway Reservation System.
//Requirements:
//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- By Searching Train Number
//(C) Minimum 3 Input Train Records
#include<iostream>
using namespace std;
class Railway
{
	int Number,Time;
	string name;
	static string Destination,Source;
	public:
		Railway(int Number,string name,int Time)
		{
			this->Number=Number;
			this->name=name;
			this->Time=Time;
			
		}
		void output(int j)
		{
			cout<<"----------------------------------"<<endl;
			cout<<"This are deatil of trail :"<<j<<" "<<endl;
			cout<<"Train name :"<<name<<" "<<endl;
			cout<<"Train Number :"<<Number<<" "<<endl;
			cout<<"Train Source :"<<Source<<" "<<endl;
			cout<<"Train Destination :"<<Destination<<" "<<endl;
			cout<<"Train Time :"<<Time<<" "<<endl;
		}
	
};
string Railway::Destination="Mumbai";
string Railway::Source="Ahmedabad";

main()
{
	int n,i,j=1;
	cout<<"Enter the Railway record : ";
	cin>>n;
	int Number,Time;
	string name,line;
	Railway a[n]=Railway(Number,name,Time);
	for(i=0;i<n;i++)
	{
		cout<<"---------------------------"<<endl;
		cout<<"Enter the detail of train : "<<endl;
		getline(cin,line);
		cout<<"Enter the train name : ";
		getline(cin,name);
		cout<<"Enter the train number : ";
		cin>>Number;
		cout<<"Enter the train time : ";
		cin>>Time;
		cin.ignore();
		a[i]=Railway(Number,name,Time);
	}
	
	for(i=0;i<n;i++)
	{
		a[i].output(j);
		j++;
	}
	
	
	 
} 



