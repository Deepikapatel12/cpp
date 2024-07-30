#include<iostream>
using namespace std;
int main()
{
    //unique value
    int arr[]={2,2,4,4,3};
    int count=0;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
      /*  if(arr[i]!=arr[0] && arr[i]!=arr[1] && arr[i]!=arr[2])
        {
            cout<<arr[i];
        }
        */
         if(arr[0]==arr[1])
        {
            cout<<arr[1];

        }
        else if(arr[2]==arr[3])
        {
            cout<<arr[3];

        }
    }
}
