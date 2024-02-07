
#include<iostream>
using namespace std;
class Railway
{
	int Number,Time;
	string name,Source;
	static string Destination;
	public:
		Railway(int Number,string name,int Time,string Source)
		{
			this->Number=Number;
			this->name=name;
			this->Time=Time;
			this->Source=Source;
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
		~Railway()
		{
			cout<<endl<<"Thank you for use our service : "<<endl;
		}
	
};
string Railway::Destination="Mumbai";
main()
{
	int n,i,j=1;
	cout<<"Enter the Railway record : ";
	cin>>n;
	int Number,Time;
	string name,line,Source;
	Railway a[n]=Railway(Number,name,Time,Source);
	int arr[n];
	for(i=0;i<n;i++)
	{
		cout<<"---------------------------"<<endl;
		cout<<"Enter the detail of train : "<<endl;
		cout<<"Enter the train number : ";
		cin>>Number;
		cin.ignore();
		cout<<"Enter the train source : ";
		getline(cin,Source);
//		cin.ignore();
		cout<<"Enter the train name : ";
		getline(cin,name);
		cout<<"Enter the train time : ";
		cin>>Time;
		cin.ignore();
		arr[i]=Number;
		a[i]=Railway(Number,name,Time,Source);
		
	}
	int search,choice;
	do
	{
		cout<<"----------------------------------------"<<endl;
		cout<<"Enter 1 to All record found : "<<endl;
		cout<<"Enter 2 to search any train record : "<<endl;
		cout<<"Enter 3 to exit from app : "<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:for(i=0;i<n;i++)
			{
				
				a[i].output(j);
			}
			break;
			case 2:
			cout<<"Enter your search : "<<endl;
				cin>>search;
				
			for(i=0;i<n;i++)
			{
				if(arr[i]==search)
				{
					a[i].output(j);
				}
			}
			break;
			
			case 3:cout<<"Your exist from app : "<<endl;
			}
	}while(choice!=3);
} 



