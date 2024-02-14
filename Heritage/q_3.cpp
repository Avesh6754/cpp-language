//Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance.
// (as same the attached image)
#include<iostream>

using namespace std;
class A
{
	protected:
		int id;
		string name,role;
		void setter1()
		{
			cout<<"Enter your id : ";
			cin>>id;
			cin.ignore();
			cout<<"Enter your name : ";
			getline(cin,name);
			cout<<"Enter your role : ";
			getline(cin,role);
		}
	
};
class B:public A
{
	protected:
		int salary,experience;
		void setter2()
		{
			cout<<"Enter your salary : ";
			cin>>salary;
			cin.ignore();
			cout<<"Enter your experience : ";
			cin>>experience;
		}
		
	
};
class C:public B
{
	protected :
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
		
			cin>>contact;
		}
		void getter2()
		{
			cout<<"_-------------------------------------"<<endl;
			cout<<endl<<"Employee id : "<<id<<" "<<endl;
			getter1();
			cout<<endl<<"Employee experience : "<<experience<<" years"<<endl;
			cout<<endl<<"Employee company_name : "<<company_name<<" "<<endl;
			cout<<endl<<"Employee address : "<<address<<" "<<endl;
			cout<<endl<<"Employee email : "<<email<<" "<<endl;
			cout<<endl<<"Employee contact : "<<contact<<" "<<endl;
			cout<<"_-------------------------------------"<<endl;
		}
	
};
main()
{
	D d1;
	d1.setter();
	d1.getter2();

}
