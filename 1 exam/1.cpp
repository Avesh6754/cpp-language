#include<iostream>
using namespace std;
class Inch
{
	public:
    int i,k,f,n=2,sum1=0,sum=0;
    
    void input()
    {
      for(k=0;k<n;k++)
	  {
	  	
    	cout<<"enter the inch i ";
    	cin>>i;
    	
    	
    	i=i/12;
    	sum1=sum1+i;
    	
		}	
		cout<<" sum "<<sum1<<endl;
	}
	void user()
	{
		for(k=0;k<n;k++)
		{
			
		cout<<"enter the inch f ";
    	cin>>f;	
    	f=f+(i/12);
    	sum=sum+f;
		}
    	cout<<" sum "<<sum<<endl;
	}
	

	
	
	
	
    
	
		
};
main()
{
	
	Inch m;
	m.input();
	m.user();
	
	
	

}