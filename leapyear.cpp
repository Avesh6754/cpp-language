#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

main()
{
  int f,s,result =0,ans=0,i;
  
    cout << "Enter the first year ";
    cin >>f;
    cout << "Enter the second year ";
    cin >>s;
    
    ans = s - f;
    result = (ans/4)+1;
    
    int leap_year[result],x=0;
    
    for(i=f;i<=s;i++)
    {
      if(i%4==0)
      {
        leap_year[x] = i;
        x++;
      }
    }
    for(i=0;i<x;i++)
    {
      cout << leap_year[i] <<" ";
    }
    
}
