#include<iostream>
using namespace std;
main()
{
	int a,m,h;
	
	cout<<"enter the second ";
	cin>>a;
	
	int s=0,v=0;
	
	s=a%3600;
	h=a/3600;
	v=a%60;
	m=s/60;
	
	cout<<" "<<h<<" "<<m<<" "<<v;
}
