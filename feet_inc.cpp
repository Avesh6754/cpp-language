#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

main()
{
  int feet,inch,i;
    cout << "Enter the feet ";
    cin >>feet;
    cout << "Enter the inch ";
    cin >>inch;
    
    for(i=1;i<inch;i++)
    {
      if(inch >=12)
      {
        inch -=12;
        feet++;
      }
    }
    cout << "feet : "<< feet <<"  "<<endl;
    cout << "inch : " << inch << "  ";
}
