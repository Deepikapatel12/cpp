#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};


    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;++c)
        {
            cout<<arr1[r][c]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n";

    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;++c)
        {
            cout<<arr2[r][c]<<"\t";
        }
        cout<<"\n";

    }
    cout<<"\n";

     for(int r=0;r<3;r++)
     {
         for(int c=0;c<3;c++)
            cout<<arr1[r][c]+arr2[r][c]<<"\t";
            cout<<"\n";
     }
  //  cout<<"\n";

}
