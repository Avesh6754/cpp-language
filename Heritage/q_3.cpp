//Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance.
// (as same the attached image)
#include<iostream>

using namespace std;
class A
{
	protected:
		int id,salary,experience;
		long long int contact;
		string name,company_name,address,email,role;
		void setter1()
		{
			cout<<"Enter your id : ";
			cin>>id;
			cin.ignore();
			cout<<"Enter your name : ";
			getline(cin,name);
			cout<<"Enter your role : ";
			cin.ignore();
			getline(cin,role);
		}
	
};
class B:public A
{
	public:
		int salary,experience;
		void setter2()
		{
			cout<<"Enter your salary : ";
			cin>>salary;
			cout<<"Enter your experience : ";
			cin>>experience;
		}
		
	
};
class C:public B
{
	public :
		string company_name,address;
		void setter3()
		{
			cin.ignore();
			cout<<"Enter your company_name : ";
			getline(cin,company_name);
			cout<<"Enter your address : ";
			getline(cin,address);
			
		}
		void getter1()
		{
			setter1();
			setter2();
			cout<<"Employee name : "<<name<<" "<<endl;
			cout<<"Employee role : "<<role<<" "<<endl;
			cout<<"Employee salary : "<<salary<<" "<<endl;
		}
};
class D :public C
{
	public:
		string email;
		long long int contact;
		void setter()
		{
			setter1();
			setter2();
			setter3();
			cout<<"Enter your email : ";
			getline(cin,email);
			cout<<"Enter your contact : ";
			cin.ignore();
			cin>>contact;
		}
		void getter2()
		{
			cout<<endl<<"Employee id : "<<id<<" "<<endl;
			cout<<endl<<"Employee name : "<<name<<" "<<endl;
			cout<<endl<<"Employee role : "<<role<<" "<<endl;
			cout<<endl<<"Employee salary : "<<salary<<" "<<endl;
			cout<<endl<<"Employee experience : "<<experience<<" years"<<endl;
			cout<<endl<<"Employee company_name : "<<company_name<<" "<<endl;
			cout<<endl<<"Employee address : "<<address<<" "<<endl;
			cout<<endl<<"Employee email : "<<email<<" "<<endl;
			cout<<endl<<"Employee contact : "<<contact<<" "<<endl;
		}
	
};
main()
{
	D d1;
	d1.setter();
	d1.getter2();

}
