#include<iostream>
using namespace std;
int main()
{
     int arr[]={3,2,6,4,5};
     int s=sizeof(arr)/sizeof(arr[0]);
     int pos,i;
     for(i=0;i<s;i++)
     {
         cout<<arr[i]<<"\t";
     }
     cout<<"\n Enter positionto delete the value\n";
     cin>>pos;
     if(pos<0 || pos>s)
        {
                cout<<"invald position";
        }
     else
     {
         cout<<"\n After deletion \n";
         for(i=pos;i<s;i++)
         {
             arr[i]=arr[i+1];
         }
         s--;
         for(i=0;i<s;++i)
         {
             cout<<arr[i]<<"\t";
         }
     }
}
