//Create a class representing a `Movie` with attributes like `title`, `genre`, and `releasedYear`. 
//Demonstrate the instantiation of objects using array and accessing their attributes.

#include<iostream>

using namespace std;
class Movie
{
	int releasedYear;
	string title,genre;
		public:
			void set(int a)
			{
				cout<<"-----------------------------------------"<<endl;
				cout<<"Entre the Movie deatils : "<<a<<" "<<endl;
				cout<<"Enter the Movie title  : ";
				cin.ignore();
				getline(cin,title);
				cout<<"Enter the Movie genre  : ";
				getline(cin,genre);
				cout<<"Entre the year of movie released : ";
//				cin.ignore();
				cin>>releasedYear;
			}
			void get(int j)
			{
				cout<<"-----------------------------------------"<<endl;
				cout<<"Entre the Movie deatils : "<<j<<" "<<endl;
				cout<<"Movie title : "<<title<<" "<<endl;
				cout<<"Movie genre : "<<genre<<" "<<endl;
				cout<<"Movie released Year : "<<releasedYear<<" "<<endl;
			}
};
main()
{
	int n,a=1,j=1;
	cout<<"Entre the size of array : ";
	cin>>n;
	Movie m1[n];
	for(int i=0;i<n;i++)
	{
		m1[i].set(a);
		a++;
	}
	for(int i=0;i<n;i++)
	{
		m1[i].get(j);
		j++;
	}
}
