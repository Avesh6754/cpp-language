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
	     if(j%2==1)
	     {
	     	k+=z;
		 }
		 else
		 {
		 	k+=y;
		 }
		 
		}
		y-=2;
		z+=2;
		cout<<endl;
	}
}
