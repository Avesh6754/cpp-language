#include<iostream>
using namespace std;
class Cla
{
	public:
	int feet,inch,n,sum=0,sum1=0,i,j;
	
	void input()
	{
		cout<<"Enter the size of n : ";
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			cout<<"Enter the size of feet : ";
			cin>>feet;
			cout<<"Enter the size of inch : ";
			cin>>inch;
			
			sum=sum+feet;
			sum1=sum1+inch;
			
		}
		for(j=1;j<sum1;j++)
		{
			if(sum1>=12)
			{
				sum++;
				sum1-=12;
			}
			
		}
		cout<<" "<<sum<<endl;
		cout<<" "<<sum1;
		
	}
	
};
main()
{
	Cla m;
	m.input();
	
	
}