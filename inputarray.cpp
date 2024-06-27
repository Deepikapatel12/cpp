#include<iostream>
using namespace std;
int main()
{
    int cyb[5];
    //to find the length of an array formula imp
    int s=sizeof(cyb)/sizeof(cyb[0]);
    cout<<"enter 5 roll no ";
    for(int i=0;i<s;++i)
    {
        cin>>cyb[i];
    }
    cout<<"result\n";
    for(int i=0;i<s;++i)
    {
        cout<<i<<"="<<cyb[i]<<"\n";
    }
}
