#include<iostream>
using namespace std;
void pwr(int b, int p)
{
    int r=b;
    while(p>1)
    {
        r=r*b;
        p--;
    }
    cout<<"result="<<r;
}
int main()
{
    int a,b;
    cout<<"enter bse\n";
    cin>>a;
    cout<<"enter power\n";
    cin>>b;
    pwr(a,b);
}
