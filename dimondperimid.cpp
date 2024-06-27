#include<iostream>
using namespace std;
int main()
{
        int n=4;
    for(int r=1;r<=n;++r)
    {
        for(int spc=r;spc<n;++spc)
        {
            cout<<" ";
        }
        for(int c=1;c<=r;++c)
        {
            //"* " gap for space
            cout<<"* ";
        }
        cout<<"\n";
    }
     for(int r=n;r>=1;--r)
    {
        for(int spc=r;spc<n;++spc)
        {
            cout<<" ";
        }
        for(int c=2;c<=r;++c)
        {
            //"* " gap for space
            cout<<" *";
        }
        cout<<"\n";
    }
}
