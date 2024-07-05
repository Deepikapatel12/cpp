#include<iostream>
using namespace std;
//it will handle any types of exception but always generate common massage
int main()
{
    int a,b,c;
    cout<<"address of c="<<&c;
    try{
    cout<<"\nenter 1 no\n";
    cin>>a;
    cout<<"\nenter 2 no\n";
    cin>>b;
    if(b==0)
    {
        throw b;
    }
    cout<<a/b<<"\n";
    }
    catch(...)
    {
        cout<<"there is a system problem\n";
    }
    cout<<"done";
}
