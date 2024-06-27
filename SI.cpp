#include<iostream>
using namespace std;
int main()
{
    int p,t,r,SI;
    cout<<"enter amount:";
    cin>>p;
    cout<<"enter time period:";
    cin>>t;
    cout<<"enter interest:";
    cin>>r;
    SI=(p*r*t)/100;
    cout<<"simple interest:"<<SI;
}
