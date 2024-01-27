#include<iostream>
using namespace std;
main()
{
	int inch , feet;
	cout<<"enter the feet : ";
	cin>>feet;
	cout<<"enter the inch : ";
	cin>>inch;
	
	feet = feet+(inch/12);
	inch=inch % 12;
	
	cout<<"feet = "<<" "<<feet<<endl;
	cout<<"inch = "<<" "<<inch;
	
	
}
