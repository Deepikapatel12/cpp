#include<iostream>
using namespace std;
int main()
{
    int sqr[1];
    //to find the length of an array formula imp
    int s=sizeof(sqr)/sizeof(sqr[0]);
    cout<<"enter  no ";
    for(int i=0;i<s;++i)
    {
        cin>>sqr[i];
    }
    cout<<"Square of each value\n";
    for(int i=0;i<s;++i)
    {
        cout<<sqr[i]*sqr[i]<<"\n";
    }
}
