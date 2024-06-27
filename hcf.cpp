#include<iostream>
using namespace std;
int main()
{
     int a,b,low,ans;
     cout<<"enter two no\n";
     cin>>a>>b;
     low=a<b?a:b;
     for(int i=1;i<=low;i++)
     {
         if(a%i==0 && b%i==0)
         {
             ans=i;
         }
     }
     cout<<ans;
}
