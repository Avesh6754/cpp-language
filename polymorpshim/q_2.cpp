#include<iostream>
using namespace std;
class Cricket 
{
	protected:
		
		int over;
		public:
		void getTotalOvers(int over)
		{
			this->over=over;
			cout<<"Enter Total Over : "<<over<<endl;
		}
};
class T20Match:public Cricket
{
	public:
		
		void getTotalOvers(int over)
		{
			this->over=over;
			cout<<"Enter Total Over : "<<over<<" over"<<endl;
		}
	
};
class ODIMatch:public Cricket
{
	public:
		
		void getTotalOvers(int over)
		{
			this->over=over;
			cout<<"Enter Total Over : "<<over<<" over"<<endl;
		}
};
main()
{
	T20Match t;
	t.getTotalOvers(20);
	ODIMatch o;
	o.getTotalOvers(50);
}
