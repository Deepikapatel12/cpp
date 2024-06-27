#include<iostream>
using namespace std;
int main()


//smallest

{
    int arr[5]={24,3,100,9,8};
    int mini=arr[0];
    for(int i=0;i<5;++i)
    {
        if(mini>arr[i])
        {
            mini=arr[i];
        }
    }
    cout<<"mini value="<<mini;
}

//largest


/* {int arr[5]={24,3,100,9,8};
    int maxi=arr[0];
    for(int i=0;i<5;++i)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
        }
    }
    cout<<"max value="<<maxi;
 }
 */
