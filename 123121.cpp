#include<iostream>
using namespace std;
int main()
{
    for(int i=3;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"\t";
        }

        cout<<"\n";
    }
    int a=1;
        for(int i=3;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a<<"\t";
            a++;
        }

        cout<<"\n";
    }
     for(int i=3;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<'*'<<"\t";
        }

        cout<<"\n";
    }

     for(int i=3;i>=1;i--)
    {
        char ch='a';
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<"\t";
            ch++;
        }

        cout<<"\n";
    }
        for(int i=1;i<=3;i++)
    {
        for(int j=3;j>=i;j--)
        {
            cout<<j<<"\t";
        }

        cout<<"\n";
    }


}
