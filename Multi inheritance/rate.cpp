//Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child
//classesguity errors.

#include<iostream>
using namespace std;

class RBI
{
	public:
		float Rate1,Rate2,Rate3;
		void sbi()
		{
			cout<<"Entre the value of sbi : ";
			cin>>Rate1;
			
		}
		void icici()
		{
			cout<<"Entre the value of icici : ";
			cin>>Rate2;	
			
		}
		void bob()
		{
			cout<<"Entre the value of bob : ";
			cin>>Rate3;	
			
		}
};
class SBI:public RBI
{
	public:
		void getROI()
		{
			sbi();
			cout<<"SBI rate of interest "<<Rate1<<" %"<<endl;
		}
};
class ICICI : public RBI{
	public:
		
		void getROI()
		{
			icici();
			cout<<"ICICI rate of interest "<<Rate2<<" %"<<endl;
		}
};
class BOB:public RBI
{
	public:
		void getROI()
		{
			bob();
			cout<<"BOB rate of interest "<<Rate3<<" %"<<endl;
		}
	
};
main()
{
//	RBI r;
//	r.bob();
//	r.icici();
//	r.sbi();
	SBI s;
	s.getROI();
	ICICI i;
	i.getROI();
	BOB b;
	b.getROI();
	
}
