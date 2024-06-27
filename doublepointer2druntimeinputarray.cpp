#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter size of row\n";
    cin>>r;
    cout<<"Enter size of Coloumn\n";
    cin>>c;
    int **arr= new int *[r];
    for(int i=0;i<r;i++)
    {
        arr[i]= new int[c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];

        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           cout<<arr[i][j]<<"\t";

        }
        cout<<"\n";
    }
    delete[] arr;

}
