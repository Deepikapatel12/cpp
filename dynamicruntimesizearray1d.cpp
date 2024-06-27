#include<iostream>
using namespace std;
int main()
// Single dimensional Dynamic array to give size in run time ========== this is called heap memory iska koi secquence ni hota
//syntax:- data type  *arr= new datatype[s];
{
    int s;
    cout<<"Enter size of array\n";
    cin>>s;
    int *arr=new int[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"Stored values in array\n";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
