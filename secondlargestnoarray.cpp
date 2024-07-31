#include<iostream>
using namespace std;
int main()
{

    int a[5]={12,3,2,8,9};
    int k=0;
    for(int i=0;i<5;++i)
    {
        if(k<a[i])
        {
            k=a[i];

        }
    }

cout<<k;
}


