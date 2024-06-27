#include<iostream>
using namespace std;
int main()
{
    //first type
   /* int f=0;
    int n;
    int t=n;
    while(t>0)
    {
        if(n%t==0)
        {
            f++;
        }
        t--;
    }
    if(f==2)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }*/

    //Second type
    int f=0;
    int n =7;
    int t=n-1;
    while(t>1)
    {
        if(n%t==0)
        {
            f=1;
            break;
        }
        t--;
    }
    if(f==0)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
}
