#include<iostream>
using namespace std;
void largest(int a, int b, int c)
{
    if(a>=b && a>=c)
    {
        cout<<"A is greater="<<a;
    }
    else if(b>=a && b>=c)
    {
        cout<<"B is greater="<<b;
    }
    else
    {
        cout<<"C is greater"<<c;
    }
}
int main()
{
    int a,b,c;
    cout<<"enter value of a";
    cin>>a;
    cout<<"enter value of b";
    cin>>b;
    cout<<"entet value of c";
    cin>>c;
    largest(a,b,c);
}
