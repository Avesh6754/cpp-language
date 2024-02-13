
//Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
//- use only one method named calculate() in the child class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition

#include<iostream>

using namespace std;

class A
{
protected:
int a,b,choice,c,d,e,sum;


};
class B:public A
{
public:
void calculate(int a,int b)
{
sum=a/b;
cout<<"Division : "<<sum<<" "<<endl;
}
void calculate(int a,int b,int c)
{
sum=a-b-c;
cout<<"substract : "<<sum<<" "<<endl;
}
void calculate(int a,int b,int c,int d)
{
sum=a*b*c*d;
cout<<"Multiple : "<<sum<<" "<<endl;
}
void calculate(int a,int b,int c,int d,int e)
{
sum=a+b+c+d+e;
cout<<"Addition : "<<sum<<" "<<endl;

}

};
main()
{
int a,b,c,d,e;
cout<<"Enter the value of a : ";
cin>>a;
cout<<"Enter the value of b : ";
cin>>b;
cout<<"Enter the value of c : ";
cin>>c;
cout<<"Enter the value of d : ";
cin>>d;
cout<<"Enter the value of e : ";
cin>>e;

B b1;
b1.calculate(a,b);
b1.calculate(a,b,c);
b1.calculate(a,b,c,d);
b1.calculate(a,b,c,d,e);

}


