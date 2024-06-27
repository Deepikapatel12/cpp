#include<iostream>
using namespace std;
int main()
{
   int n;
   int r=0;
   cout<<"enter any number\n";
   cin>>n;
   int t=n;
   while(n>0)
   {
       r=r*10+n%10;
       n=n/10;
   }
   cout<<"t"<<t<<"\n";
   cout<<"r"<<r<<"\n";
   if(t==r)
   {
       cout<<"Palindrome";
   }
   else{
    cout<<"not Palindrome";
   }
}
