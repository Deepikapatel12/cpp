#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<"\n";
         for(int j=0;j<3;j++)
    {
        cout<<a[j]<<"\t";
    }
    }

}
