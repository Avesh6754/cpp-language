//Create a class representing a `Book` with attributes like `title`, `author`, and `publishedYear`.
// Demonstrate the instantiation of objects using array and accessing their attributes.

#include<iostream>

using namespace std;
class Book
{
	int publishedYear;
	string title,author;
		public:
			void set(int a)
			{
				cout<<endl<<endl<<"===============[Enter Books Details]======================"<<" "<<endl;
				cout<<"Entre the deatils of books : "<<a<<" "<<endl;
				cout<<"Enter the Book Title : ";
				cin.ignore();
				getline(cin,title);
//				cin.ignore();
				cout<<"Enter the Book Author : ";
				getline(cin,author);
				cout<<"Enter the Book Published year : ";
				cin>>publishedYear;
				
			}
			void get(int j)
			{
				cout<<endl<<endl<<"===============[Books Details]======================"<<" "<<endl;
				cout<<"This are Books Deatils : "<<j<<" "<<endl;
				cout<<"Book Title : "<<title<<" "<<endl;
				cout<<"Book Author : "<<author<<" "<<endl;
				cout<<"Book Published year : "<<publishedYear<<" "<<endl;
			}
};
main()
{
	int n;
	cout<<"Enter the size of n : ";
	cin>>n;
	int a=1,j=1;
	Book b1[n];
	int i;
	for(int i=0;i<n;i++)
	{
		b1[i].set(a);
		a++;
	}
	for(i=0;i<n;i++)
	{
		b1[i].get(j);
		j++;
	}
}
