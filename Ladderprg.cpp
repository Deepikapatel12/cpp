#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 no.\n";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"largest no="<<a;
    }
    else if(b>c && b>a)
    {
        cout<<"largest no="<<b;
    }
    else
    {
        cout<<"largest no="<<c;
    }
}

