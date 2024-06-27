#include<iostream>
using namespace std;
int main()
{

    int f;
    int n=7;
    int t=n;
    while (t>0)
    {
        if (n%t==0)
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
        }
}
