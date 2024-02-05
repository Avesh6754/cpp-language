/*Q.2 Write a Program to get and display N numbers of Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like a rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity
*/

#include<iostream>
using namespace std;

class Food
{
	int cafe_id,cafe_rating,cafe_establish_year,cafe_staff_quantity;

	string cafe_name,cafe_type,cafe_location;
	
	public:
		Food()
		{
			cout<<"Welcome to our Food cafe : "<<endl;
		}
		void input(int j)
		{
			cout<<"------------------------------"<<endl;
			cout<<"Enter the detail of Fast Food cafe : "<<""<<endl;
			cout<<"Enter the Fast Food cafe id : ";
			cin>>cafe_id;
			cin.ignore();
			cout<<"Enter Fast Food cafe name : ";
			getline(cin,cafe_name);
			cout<<"Enter Fast Food cafe location : ";
			getline(cin,cafe_location);
			cout<<"Enter the Fast Food cafe type like (rooftop or normal) : ";
			getline(cin,cafe_type);
			cout<<"Enter the rating of Fast Food cafe (like 1 Star, 2 Start, ..., 5 Star) : ";
			cin>>cafe_rating;
			cin.ignore();
			cout<<"Enter the number of staff Fast Food cafe : ";
			cin>>cafe_staff_quantity;
			cin.ignore();
			cout<<"Enter the establish year of Fast Food cafe : ";
			cin>>cafe_establish_year;
			cin.ignore();
		}
		void output(int j)
		{
			cout<<"------------------------------"<<endl;
			cout<<"This are the detail of Fast Food cafe : "<<j<<endl;
			cout<<"Fast Food cafe name : "<<cafe_name<<endl;
			cout<<"Fast Food cafe id : "<<cafe_id<<endl;
			cout<<"Fast Food cafe type like (rooftop or normal) : "<<cafe_type<<endl;
			cout<<"Fast Food cafe location : "<<cafe_location<<endl;
			cout<<"rating of Fast Food cafe (like 1 Star, 2 Start, ..., 5 Star) : "<<cafe_rating<<" "<<"Star"<<endl;
			cout<<"number of staff Fast Food cafe : "<<cafe_staff_quantity<<endl;
			cout<<"The establish year of Fast Food cafe : "<<cafe_establish_year<<endl;
		}
	
};

main()
{
	int i,n,j=1;
	cout<<"Enter the number of cafe n : ";
	cin>>n;
	Food f[n];
	for(i=0;i<n;i++)
	{
		f[i].input(j);
		j++;
		
	}
	for(i=0;i<n;i++)
	{
		f[i].output(j);
		j++;
		
	}
	
}
