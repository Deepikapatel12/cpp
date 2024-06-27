#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
         cout<<"*"<<"\t";
        }
            cout<<"\n";
    }

    cout<<"\n";

    for(int i=3;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n";
    char ch='a';
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<"\t";
            ++ch;
        }
        cout<<"\n";
    }
    cout<<"\n";
    int n=4;
    for(int r=1;r<=n;r++)
    {
        for(int spc=r;spc<n;spc++)
        {
            cout<<" ";
        }
        for(int c=1;c<=r;c++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
     for(int r=n;r>=1;r--)
    {
        for(int spc=r;spc<n;spc++)
        {
            cout<<" ";
        }
        for(int c=1;c<r;c++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    cout<<"\n";
    int m=4;
    for(int r=1;r<=m;r++)
    {
        for(int spc=r;spc<=m;spc++)
        {
            cout<<" ";
        }
        for(int c=1;c<=r;c++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int r=m;r>1;r--)
    {
        for(int spc=r;spc<=m;spc++)
        {
            cout<<" ";
        }
        for(int c=1;c<r;c++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }

}
