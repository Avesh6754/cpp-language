#include<iostream>

using namespace std;

main()
{
	int i,j,k=1,y=9,z=1;
	
	for(i=5;i>=1;i--)
	{
		k=i;
		for(j=1;j<=5;j++)
		{
			cout<<" "<<k;
			k+=5;
	     
		}
		cout<<endl;
	}
}
