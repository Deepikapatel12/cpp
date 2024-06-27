#include<iostream>
using namespace std;

void swaps(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a<<"\n"<<"b="<<b;
}
int main()
{
    int a,b;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    swaps(a,b);

}
