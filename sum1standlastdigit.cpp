#include<iostream>
using namespace std;
int main()
{
int a,last,first=0;
cout<<"enter no\n";
cin>>a;
last=a%10;
while(a>0)
{
    first=a%10;
    a=a/10;
}
cout<<first+last;

}

