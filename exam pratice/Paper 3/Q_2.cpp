//2. Define a class `Person` with private attributes `name`, `age`, and `address`. Encapsulate these attributes using getter and setter methods. 
//Implement a parameterized constructor for the `Person` class.
// Create N number of objects using this constructor and display the details.

#include<iostream>

using namespace std;
class Person
{
	int age;
	string name,address;
	public:
		Person(int age,string name,string address)
		{
			this->age=age;
			this->name=name;
			this->address=address;
		}
//		void setter()
//		{
//			
//		}
		void getter(int a)
		{
			cout<<endl<<endl<<"==========================================="<<" "<<endl;
			cout<<"This are Different persons Details : "<<a<<" "<<endl;
			cout<<"Person Name : "<<name<<" "<<endl;
			cout<<"Person Age : "<<age<<" "<<endl;
			cout<<"Person Address : "<<address<<" "<<endl;
		}
};
main()
{
	int n;
	cout<<"Enter the size of n : ";
	cin>>n;
	int age;
	string name,address;
	Person b[n]=Person(age,name,address);
	
	for(int i=0;i<n;i++)
	{
		cout<<endl<<endl<<"==========================================="<<" "<<endl;
		cout<<"Enter the Person Details : "<<endl;
		cout<<"Enter the Person Name : ";
		cin.ignore();
		getline(cin,name);
		cout<<"Enter the Person Address : ";
		getline(cin,address);
		cout<<"Enter the Person Age : ";
		cin>>age;
		b[i]=Person(age,name,address);
	}
	int a=1;
	for(int j=0;j<n;j++)
	{
		b[j].getter(a);
		a++;
	}
}
