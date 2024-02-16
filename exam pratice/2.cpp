//2. Define a class named `Employee` with private attributes `name`, `salary`, and `designation`. 
// Demonstrate the encapsulation concept by accessing these attributes through the member functions.
//Encapsulate these attributes using appropriate access specifiers. Implement public member functions to set and
// get the values of these attributes.

#include<iostream>

using namespace std;

class Employee
{
	int salary;
	string name,designation;
	public:
		void set()
		{
			cout<<"Enter the name : ";
			getline(cin,name);
			cout<<"Enter the designation : ";
			getline(cin,designation);
			cout<<"Enter the value of salary : ";
			cin>>salary;
			
		}
		void get()
		{
			cout<<"name : "<<name<<" "<<endl;
			cout<<"designation : "<<designation<<" "<<endl;
			cout<<"salary : "<<salary<<" "<<endl;
		}
		
};
main()
{
	Employee r1;
	r1.set();
	r1.get();	
}
