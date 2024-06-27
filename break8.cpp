#include<iostream>
using namespace std;
int main()
{
 int a[5]={5,9,8,6,2};
 for(int i=0;i<5;i++)
 {
    //  cout<<a[i]<<"\n"; //print with 8
     if(a[i]==8)
      {
         //  cout<<a[i]<<"\n"; //only print 8
         break;
      }
        cout<<a[i]<<"\n"; //without 8
 }

}
