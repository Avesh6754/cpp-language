#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

 main()
{
  int n;
    cout << "Enter the size of array n : ";
    cin >> n;
    
    int a[n],i;
    for(i=0;i<n;i++)
    {
      cout <<" Enter the element of array a["<<i<<"]";
      cin >>a[i];
    }
     for(i=0;i<n;i++)
    {
      cout <<a[i]<<endl;
      
    }
    cout <<"Find Even element of array"<<endl;
    for(i=0;i<n;i++)
    {
      if(a[i]%2==0)
      {
        cout <<a[i]<<" ";
      }
      
    }
    
    
    
    
}
