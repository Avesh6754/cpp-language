#include<iostream>
using namespace std;

main()
{
	int s,m=0,h=0;
	cout << "Enter the second : ";
	cin>>s;
	
	while(s>=60)
	{
		s-=60;
		m++;
	}
	while(m>=60)
	{
		m-=60;
		h++;
	}
	
	cout<<" "<<h<<"-"<<m<<"-"<<s;

}