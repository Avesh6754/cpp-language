//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity

#include<iostream>
using namespace std;

class Hotel
{
	int hotel_id,hotel_rating,hotel_staff_quantity,hotel_room_quantity;
	static int hotel_establish_year;
	string hotel_type,hotel_location,line;
	static string hotel_name;
	public:
		void input(int a)
		{
			cout<<" "<<"Enter the hotel detail "<<a<<" "<<endl;
			cout <<"Enter the hotel id :";
			cin>>hotel_id;
			getline(cin,line);
			cout<<"Enter the hotel type like (motel,hotel): ";
			getline(cin,hotel_type);
			cout<<"Enter the hotel location : ";
			getline(cin,hotel_location);
			cout <<"Enter the hotel rating :";
			cin>>hotel_rating;
			cin.ignore();
			cout <<"Enter the hotel staff quantity  :";
			cin>>hotel_staff_quantity;
			cin.ignore();
			cout <<"Enter the hotel room quantity  :";
			cin>>hotel_room_quantity;
			
		}
		void output(int a)
		{
			cout<<"---------------------------------------" <<endl;
			cout<<" "<<"This are the hotel detail :" <<a<<" "<<endl;
			cout<<"Hotel name : "<<hotel_name<<endl;
			cout<<"Hotel type : "<<hotel_type<<endl;
			cout<<"Hotel established year : "<<hotel_establish_year<<" year "<<endl;
			cout<<"Hotel rating : "<<hotel_rating<<" star"<<endl;
			cout<<"Hotel staff : "<<hotel_staff_quantity<<endl;
			cout<<"Hotel room : "<<hotel_room_quantity<<endl;
			cout<<"Hotel location : "<<hotel_location<<endl;
		}
};
string Hotel::hotel_name = "Paradise Hotel";
int Hotel::hotel_establish_year = 2002 ;

main()
{
	int n,a=1;
	cout<<"enter the size of n : ";
	cin>>n;
	
	Hotel s[n];
	
	for(int i=0;i<n;i++)
	{
		s[i].input(a);
		a++;
	}
	a=1;
	for(int i=0;i<n;i++)
	{
		s[i].output(a);
		a++;
	}
	
}
