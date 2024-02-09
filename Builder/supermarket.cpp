
#include<iostream>
using namespace std;

class Supermarket
{
	int Item_Number,Quantity,Price;
	string Item_Name;
	static int Discount;
	public:
		string id;
		int Password;
		Supermarket(int Item_Number,int Quantity,int Price,int Password,string Item_Name,string id)
		{
			this->id=id;
			this->Password=Password;
			this->Item_Number=Item_Number;
			this->Item_Name=Item_Name;
			this->Quantity=Quantity;
			this->Price=Price;
		}
		void product_output(int j)
		{
			cout<<"------------------------------------"<<endl;
			cout<<"This are the product deatil : "<<endl;
			cout<<"Item_Number : "<<Item_Number<<" "<<endl;
			cout<<"Item_Name : "<<Item_Name<<" "<<endl;
			cout<<"Quantity : "<<Quantity<<" "<<endl;
			cout<<"Price : "<<Price<<" "<<endl;
			cout<<"Discount : "<<Discount<<" "<<endl;
		}
		~Supermarket()
		{
			cout<<"Thank you for Visit : "<<endl;
		}
		
};
int Supermarket::Discount=50;
main()
{
	int n,i;
	cout<<"Enter the value of n : ";
	cin>>n;
	int Item_Number,Quantity,Price,Password;
	string Item_Name,id;
	Supermarket s[n]=Supermarket(Item_Number,Quantity,Price,Password,Item_Name,id);
	int arr[n];
	cout<<"Enter the id : ";
	cin.ignore();
	getline(cin,id);
	cout<<"Enter the password : ";
	cin>>Password;
	for(i=0;i<n;i++)
	{
		cout<<"-----------------------------------------"<<endl;
		cout<<"Enter the deatil of Supermarket : "<<endl;
		cout<<"Enter the Item_Number : ";
		cin>>Item_Number;
		cout<<"Enter the Item Name : ";
		cin.ignore();
		getline(cin,Item_Name);
		cout<<"Enter the Quantity : ";
		cin>>Quantity;
		cout<<"Enter the Price : ";
		cin>>Price;
		arr[i]=Item_Number;
		s[i]=Supermarket(Item_Number,Quantity,Price,Password,Item_Name,id);
	}
	star:
	int password,j=1,number;
	string Id;
	cout<<"Enter your Id for verify : ";
	cin.ignore();
	getline(cin,Id);
	cout<<"Enter your password for verify : ";
	cin>>password;
	
	for(i=0;i<n;i++)
	{
		if(Id==id && password==Password)
		{
			do{
			    cout<<"Enter 3 to exit from app "<<" "<<endl;
				cout<<"Enter number for search product : ";
				cin>>number;	
				for(i=0;i<n;i++)
				{
				
					if(number == arr[i])
					{
						s[i].product_output(j);
						j++;
					}
					else
					{
						cout<<"-----------------------------------"<<endl;
						cout<<"Enter valid item Number : "<<endl;
						
					}
			
				}
				if(number==3)
				{
					cout<<endl<<"Your exit from app : "<<endl;
				}
		   	}while(number!=3);
		}
		else
		{
			cout<<"Enter the valid id and password : "<<endl;
			goto star;
		}
	}
}
