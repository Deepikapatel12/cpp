#include<iostream>
using namespace std;
int main()
{
    int sum[5];
    //to find the length of an array formula imp
    int s=sizeof(sum)/sizeof(sum[0]);
    cout<<"enter  no ";
    for(int i=0;i<s;++i)
    {
        cin>>sum[i];
    }
    int k=0;

    for(int i=0;i<s;++i)
    {
        k=sum[i]+k;

    }
    cout<<"sum="<<k;
}
