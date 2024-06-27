#include<iostream>
using namespace std;
int main()
{
    //use three loops 1st for row 2nd for space 3rd for coloumn
    int n=3;
    for(int  r=1;r<=n;++r)
    {
         for(int s=n;s>r;--s)
         {
             cout<<" ";
         }
         for (int c=1;c<=r;++c)
         {
             cout<<"*";
         }
         cout<<"\n";
    }
}
