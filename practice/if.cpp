#include<iostream>
using namespace std;

class Fi
{
	int sum;
	static int f,s;
	
	public:
		void input(int n)
		{
			if(0<n)
			{
				cout<<" "<<f;
				sum=f+s;
				f=s;
				s=sum;
				n--;
			}
			
			input(n);
			
		}
	
};
int Fi::f=0;
int Fi::s=1;
main()
{
	int n;
	cout<<"Enter the number of n : ";
	cin>>n;
	
	Fi a;
	a.input(n);
}
