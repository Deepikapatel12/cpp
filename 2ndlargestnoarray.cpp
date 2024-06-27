#include<iostream>
using namespace std;
int main()
{
    int arr[]={300,200,6,4,500};
    int s=sizeof(arr)/sizeof(arr[0]);
      int max1,max2=INT_MIN;
      cout<<INT_MIN<<"\n";
      for(int i=0;i<s;i++)
      {
          cout<<arr[i]<<"\t";
      }
      for(int j=0;j<s;j++)
      {
          if(arr[j]>max1)
          {
              max2=max1;
              max1=arr[j];
          }
          if(arr[j]>max2 && arr[j]<max1)
          {
              max2=arr[j];
          }
      }
      cout<<"\n Second largest Number= "<<max2;
}
