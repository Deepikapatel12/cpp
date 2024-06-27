#include<iostream>
using namespace std;
//passing array as a parameter
void arr(int *j)  // OR
// void arr(int j[5])
//void arr(int j[],int s)
//void arr(int *j,int s)
{
    int mn=INT_MIN;
    for(int i=0;i<5;++i)
    {
        if(mn<j[i])
        {
            mn=j[i];
        }
    }
    cout<<"Large Value= "<<mn;
}
int main()
{
    int a[5]={3,2,5,6,2};
    arr(a,5);// 5 for size of array
}
