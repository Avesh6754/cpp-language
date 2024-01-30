#include<iostream>
using namespace std;
class Inch
{
	public:
    int i,k,f,sum1=0,sum=0,j;
    
    void input()
    {
     
    	cout<<"enter the inch i ";
    	cin>>i;
		cout<<"enter the inch f ";
    	cin>>f;
    	
    	cout<<"enter the inch i ";
    	cin>>i;
		cout<<"enter the inch f ";
    	cin>>f;
    	
    	sum = f+f;
    	sum1 = i+i;
    
    
    	for(j=0; j<i; j++)
    	{
    		if(sum1>=12)
    		{
    			sum++;
    			sum1-=12;
			}
		}
    
    	cout << "feet " <<sum << "inc" << sum1;
	}
	
		
};
main()
{
	Inch a;
	a.input();
	
	
	
}
