#include<iostream>
using namespace std;
//to display data in ascending order
int main()
{
    int a[]={34,2,7,4,5,9};
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n after sorting\n";
    for(int i=0;i<s;i++)
    {
        for( int j=0;j<s-i-1;++j)
        {
            if(a[j]<a[j+1])
            {
                int t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
          }
          for(int i=0;i<6;++i)
          {
              cout<<a[i]<<"\t";
          }
}
