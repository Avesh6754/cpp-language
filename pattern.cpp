#include<iostream>

using namespace std;

int main()

{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			cout<<" ";
		}
		for(j=i;j<=5;j++)
		{
			cout<<" "<<j;
		}
		cout<<endl;
	}
	for(i=5;i>=1;i--)
	{
		for(k=1;k<i;k++)
		{
			cout<<" ";
		}
		for(j=i;j<=5;j++)
		{
			cout<<" "<<j;
		}
		cout<<endl;
	}

	
	return 0;
}
