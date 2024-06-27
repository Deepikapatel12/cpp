#include<iostream>
using namespace std;
int main()
{
    int arr[3][2]={1,2,3,4,5,6};
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<2;++c)
        {
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }
}
