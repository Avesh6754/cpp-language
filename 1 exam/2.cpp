#include<iostream>
using namespace std;
class Inch
{
	public:
    int a,s=0,h=0,m=0,v=0;
    
    void input()
    {
       cout<<"enter the a :";
       cin>>a;
       
       s=a%3600;
       h=a/3600;
       v=a%60;
       m=s/60;
       
       cout<<h<<"-"<<m<<"-"<<v;
       
    	
    	
	}
	

	
	
	
	
    
	
		
};
main()
{
	
	Inch m;
	m.input();
	
	
	
	

}
