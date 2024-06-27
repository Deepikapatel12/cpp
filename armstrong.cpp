#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter any 3 digit no\n";
cin>>a;
if(a<100 || a>999)
{
     cout<<"invalid number";
}
else {
    int c=a/100;
    int d=a%100;
    int e=d/10;
    int f=d%10;
    int sum=(c*c*c)+(e+e+e)+(f*f*f);
    if(sum==a)
    {
        cout<<"armstrong";
    }
    else
        {
            cout<<"not armstrong";
        }
}
}
