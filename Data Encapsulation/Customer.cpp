// cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)
#include<iostream>
using namespace std;

class Cla
{
	int cust_id,cust_age,cust_simcard_validity;
	
	string cust_name,cust_city,cust_telecom_brand_name,line;
         long long int cust_mobile_number;
	
	public:
		void input(int a)
		{
			cout<<""<<endl;
		   	cout<<""<<"Enter the detail of customer :"<<a<<" "<<"Customer"<<endl;
		    cout<<"Enter the customer id ";
		    cin>>cust_id;
		    getline(cin,line);
		    cout<<"Enter the customer name : ";
		    getline(cin,cust_name);
		    getline(cin,line);
		    cout<<"Enter the customer city : ";
		    getline(cin,cust_city);
		    cout<<"Enter the customer age ";
		    cin>>cust_age;
		    getline(cin,line);
		    cout<<"Enter the customer mobile number ";
		    getline(cin,cust_mobile_number);
		    cout<<"Enter the customer cust_simcard_validity year ";
		    cin>>cust_simcard_validity;
		    getline(cin,line);
		    cout<<"Enter the cust_telecom_brand_name : ";
		    getline(cin,cust_telecom_brand_name);
		    cout<<" "<<endl;
	
		}
		
		void output(int a)
		{
			
			cout<<"this are detail of :"<<a<<""<<"Customer "<<endl;
			cout<<"cust_id : "<<cust_id<<endl;
			cout<<"cust_name : "<<cust_name<<endl;
			cout<<"cust_age : "<<cust_age<<endl;
			cout<<"cust_simcard_validity : "<<cust_simcard_validity<<"year"<<endl;
			cout<<"cust_mobile_number : "<<cust_mobile_number<<endl;
			cout<<"cust_city : "<<cust_city<<endl;
			cout<<"cust_telecom_brand_name : "<<cust_telecom_brand_name<<endl;
			
		
		}
		
	
};
main()
{
	int n,i,a=1;
	cout<<"Enter the size of n : ";
	cin>>n;
			
	Cla m[n];
	for(i=0;i<n;i++)
	{
		m[i].input(a);
		m[i].output(a);
		a++;
		
	}
	
}
