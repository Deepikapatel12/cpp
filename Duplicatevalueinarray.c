#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,2,4,3,4};
    count=0;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        if(arr[0]==arr[1])
        {
            count++;
        }
    }
}
