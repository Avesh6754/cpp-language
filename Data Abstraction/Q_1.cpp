#include<iostream>
//uestions:
//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class members' values accordingly.
//Class comments
//Your work
//Assigned
//Private comments
using namespace std;

class Employee
{
	protected:
		int employee_salary;
		static string company_name;
		public:
			void myAccess()
			{
				cout<<endl<<"==============[Employee can access]=============="<<" "<<endl;
				cout<<"Employee salary  : "<<employee_salary<<" "<<endl;
				cout<<"company_name     : "<<company_name<<" "<<endl;
			}
};
class Manager:public Employee
{
	protected:
		int employee_salary,manager_salary,total_staff,total_annual_revenue;
		string can_terminate;
		public:
			void myAccess()
			{
				cout<<endl<<"==============[Manager can access]=============="<<" "<<endl;
				cout<<"Employee salary      : "<<employee_salary<<" "<<endl;
				cout<<"company_name         : "<<company_name<<" "<<endl;
				cout<<"total_staff          : "<<total_staff<<" "<<endl;
				cout<<"total_annual_revenue : "<<total_annual_revenue<<" "<<endl;
				cout<<"can_terminate        : "<<can_terminate<<" "<<endl;
			}
};
class Admin:public Manager
{
	public:
		void set()
		{
			cout<<"Enter the employee_salary : ";
			cin>>employee_salary;
			cout<<"Enter the manager_salary : ";
			cin>>manager_salary;
			cout<<"Enter the total_staff : ";
			cin>>total_staff;
			cin.ignore();
			cout<<"Enter the can_terminate : ";
			getline(cin,can_terminate);
			cout<<"Enter the total_annual_revenue : ";
			cin>>total_annual_revenue;
		}
		void myAccess()
			{
				cout<<endl<<"==============[Admin can access]=============="<<" "<<endl;
				cout<<"Employee salary      : "<<employee_salary<<" "<<endl;
				cout<<"company_name         : "<<company_name<<" "<<endl;
				cout<<"Manager_salary       : "<<manager_salary<<" "<<endl;
				cout<<"total_staff          : "<<total_staff<<" "<<endl;
				cout<<"total_annual_revenue : "<<total_annual_revenue<<" "<<endl;
				cout<<"can_terminate        : "<<can_terminate<<" "<<endl;
			}
		
};
string Employee::company_name="L & T ";
main()
{
	Admin a1;
	a1.set();
	a1.Employee::myAccess();
	a1.Manager::myAccess();
	a1.myAccess();
}
