#include<iostream>
using namespace std;
#include<math.h>
int main()
{
     int n;
     int bit;
     int i=0;
     int result=0;
     cout<<"enter any no\n";
     cin>>n;
     while(n!=0)
     {
         bit=n&1;
         result=bit*pow(10,i)+result;
         n=n>>1;
         i++;
     }
     cout<<"binary no="<<result;
}
