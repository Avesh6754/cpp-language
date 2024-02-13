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
	protected:
		float Rate;
		void set()
		{
			cout<<"Enter the rate of interest : ";
			cin>>Rate;
			
		}
		
};
class SBI:public RBI
{
	public:
		void getROI()
		{
			set();
			cout<<endl<<"SBI rate of interest "<<Rate<<" %"<<endl;
		}
};
class ICICI : public RBI{
	public:
		
		void getROI()
		{
			set();
			cout<<endl<<"ICICI rate of interest "<<Rate<<" %"<<endl;
		}
};
class BOB:public RBI
{
	public:
		void getROI()
		{
			set();
			cout<<endl<<"BOB rate of interest "<<Rate<<" %"<<endl;
		}
	
};
main()
{

	SBI s;
	s.getROI();
	ICICI i;
	i.getROI();
	BOB b;
	b.getROI();
	
}
