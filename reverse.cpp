
#include<iostream>
using namespace std;
int main()
{
    int a,r;
    cout<<"enter any number\n";
    cin>>a;
    do{
        r=r*10+a%10;
        /*for show(display) r value all staps*/
         cout<<r<<"\n";
        a=a/10;
    }
    while(a>=1);
    cout<<r;
}
