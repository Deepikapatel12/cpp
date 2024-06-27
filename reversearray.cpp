//WAP to display the array in reverse order
#include<iostream>
using namespace std;
int main()
{
int a[5]={1,2,3,4,5};
for(int i=4;i>=0;--i)
{
    cout<<a[i]<<"\t";
}
cout<<"\n";
cout<<"\n";

//WAP to find out the largest value from an array

int arr[5]={2,4,7,5,8};
int k=0;
for(int d=0;d<=4;d++)
{
    if(k<arr[d])
    {
        k=arr[d];
    }
}
cout<<k;

cout<<"\n";



//WAP to print the array in ascending order

int arra[5]={3,5,4,7,2};
int b=0;
for(int i=0;i<=4;i++)
{
    if(b<=arra[i])
    {
        b=arra[i];
        cout<<b<<"\t";

    }

}

}
