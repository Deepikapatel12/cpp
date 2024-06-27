#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,1,3,4,1,2,5,1};
    int arr1[3][3]={5,2,3,6,3,1,2,1,4};
    for(int r=0;r<3;++r)
    {
        for(int c=0;c<3;++c)
        {


       if(arr[r][c]>=arr1[r][c])
       {
           cout<<arr[r][c]<<"\t";
       }
       else if(arr1[r][c]>=arr[r][c])
        {
        cout<<arr1[r][c]<<"\t";
        }

        }
    cout<<"\n";
}
}
