#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public:
  	int  emp_id, emp_age,emp_salary,emp_experience;
	string emp_name,emp_role, emp_city,emp_company_name,line;
	
		void input()
		{
			cout<<"Enter your id : ";
		 	cin>>emp_id;
		 	getline(cin,line);
			cout<<"Enter your name : ";
			getline(cin,emp_name);
			cout<<"Enter your age : ";
			cin>>emp_age;
			getline(cin,line);
			cout<<"Enter your role : ";
			getline(cin, emp_role);
			cout<<"Enter your salary : ";
			cin>>emp_salary;
			getline(cin,line);
			cout<<"Enter your city : ";
			getline(cin, emp_city);
			cout<<"Enter your experience : ";
			cin>>emp_experience;
			getline(cin,line);
			cout<<"Enter your company name : ";
			getline(cin, emp_company_name);
			

   		}
   		void output()
   		{
   			cout<<" emp_id : "<<emp_id<< endl;
			cout<<" emp_name : "<<emp_name<< endl;
			cout<<" emp_age :"<<emp_age<< endl;
			cout<<" emp_role :"<<emp_role<< endl;
			cout<<" emp_salary :"<<emp_salary<< endl;
			cout<<" emp_city :"<<emp_city<< endl;
			cout<<" emp_experience :"<<emp_experience<< endl;
			cout<<" emp_company_name :"<<emp_company_name<< endl;
   			
		}
};
main()
{
	int n,i;
	cout << "enter the size of n " ;
	cin>>n;
	Employee E[n];
	for(i=0;i<n;i++)
	{
		
		E[i].input();
		E[i].output();
	}

}
