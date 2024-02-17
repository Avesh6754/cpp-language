//Overload the `+` operator for the `Employee` class to add the salaries of two employees.
// Create two `Employee` objects and demonstrate the use of the overloaded `+` 
// operator to calculate and display the total salary.

#include<iostream>

using namespace std;
class Employee
{
	protected:
	int salary;
	public:
		void set()
		{
			cout<<"Enter the employee salary  : ";
			cin>>salary;
			
		}
		void get()
		{
			cout<<"Total salary of employee : "<<salary<<endl;
			
		}
		Employee operator+(Employee &e2)
		{
			Employee obj;
			obj.salary=this->salary+e2.salary;
			return obj;
		}	
};
main()
{
	Employee e1,e2,e3;
	e1.set();
	e2.set();
	e3=e1+e2;
	e3.get();
}
