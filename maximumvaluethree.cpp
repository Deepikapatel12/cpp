#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter any three num\n";
    cin>>a>>b>>c;
    if(a>b && a>c)
       {
           cout<<"a is greater";
       }
    if(b>c && b>a)
    {
        cout<<"b is greater";
    }
    else{
        cout<<"c is greater";

    }

}
