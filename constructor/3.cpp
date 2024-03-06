//Q.1 Write a Program to get and display N numbers of Diamond companies information using Parameterised Constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)

#include<iostream>
using namespace std;

class Diamond
{
	int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
	string comp_name,comp_ceo,line;
	
	public:
		Diamond(int comp_id,int comp_staff_quantity,int comp_revenue,int comp_import_raw_diamonds,int comp_export_diamonds,string comp_name,string comp_ceo)
		{
			this ->comp_id=comp_id;
			this ->comp_staff_quantity=comp_staff_quantity;
			this ->comp_revenue=comp_revenue;
			this ->comp_import_raw_diamonds=comp_import_raw_diamonds;
			this ->comp_export_diamonds=comp_export_diamonds;
			this ->comp_name=comp_name;
			this ->comp_ceo=comp_ceo;
		}
		void output(int a)
		{
			cout<<"----------------------------------------"<<endl;
			cout<<"This are detail of company : "<<a<<endl;
			cout<<" The company name : "<<comp_name<<endl;
			cout<<" The company ceo name : "<<comp_ceo<<endl;
			cout<<" The company id : "<<comp_id<<endl;
			cout<<" The company number staff : "<<comp_staff_quantity<<endl;
			cout<<" The company revenue : "<<comp_revenue<<endl;
			cout<<" The company import : "<<comp_import_raw_diamonds<<endl;
			cout<<" The company export : "<<comp_export_diamonds<<endl;
		}
		
};
main()
{
	int n,i,a=1;
	cout<<"Enter the number of company : ";
	cin>>n;
	int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
	string comp_name,comp_ceo,line;
	Diamond d[n]=	Diamond (comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds,comp_name,comp_ceo);;
	for(i=0;i<n;i++)
	{
		
		cout<<"Enter the company detail : "<<a<<" "<<endl;
		cout<<"Enter the company id : ";
		cin>>comp_id;
		getline(cin,line);
		cout<<"Enter the company name : ";
		getline(cin,comp_name);
		cout<<"Enter the comp staff quantity : ";
		cin>>comp_staff_quantity;
		getline(cin,line);
		cout<<"Enter the company ceo name : ";
		getline(cin,comp_ceo);
		cout<<"Enter the company revenue : ";
		cin>>comp_revenue;
		cout<<"Enter the company import raw diamond : ";
		cin>>comp_import_raw_diamonds;
		cout<<"Enter the company export diamond : ";
		cin>>comp_export_diamonds;
		d[i] =Diamond (comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds,comp_name,comp_ceo);
		a++;
	}
	int x=1;
	for(i=0;i<n;i++)
	{
		d[i].output(x);
	}

}
