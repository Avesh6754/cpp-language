//stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college
#include<iostream>
using namespace std;

class Cla
{
	int stu_id,stu_age;
	string stu_name,stu_course,stu_city,stu_email,stu_college,line;
	
	public:
		void input(int a)
		{
			cout<<""<<endl;
		    	cout<<""<<"Enter the detail of student :"<<a<<" "<<"student"<<endl;
		    	cout<<"Enter the student id ";
		    	cin>>stu_id;
		    	getline(cin,line);
		    	cout<<"Enter the student name : ";
		    	getline(cin,stu_name);
		    	cout<<"Enter the student age ";
		    	cin>>stu_age;
		    	getline(cin,line);
		    	cout<<"Enter the student course : ";
		    	getline(cin,stu_course);
		    	cout<<"Enter the student city : ";
		    	getline(cin,stu_city);
		    	getline(cin,line);
		    	cout<<"Enter the student email id : ";
		    	getline(cin,stu_email);
		    	getline(cin,line);
		    	cout<<"Enter the student college : ";
		    	getline(cin,stu_college);
		}
		
		void output(int a)
		{
			cout<<"this are detail of :"<<a<<"student"<<endl;
			cout<<"stu_id : "<<stu_id<<endl;
			cout<<"stu_name : "<<stu_name<<endl;
			cout<<"stu_age : "<<stu_age<<endl;
			cout<<"stu_course : "<<stu_course<<endl;
			cout<<"stu_city : "<<stu_city<<endl;
			cout<<"stu_email : "<<stu_email<<endl;
			cout<<"stu_college : "<<stu_college<<endl;
		 }
		
};
main()
{
	int n,i,a=1;
	cout<<"Enter the size of n : ";
	cin>>n;
			
	Cla m[n];
	for(i=0;i<n;i++)
	{
		m[i].input(a);
		m[i].output(a);
		a++;
		
	}
	
}
