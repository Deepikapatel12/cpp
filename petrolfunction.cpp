#include<iostream>
using namespace std;
int total;
void calc(int ltr)
{
    total=108*ltr;
}
void show()
{
    cout<<"bill="<<total;
}
int main()
{
    int p;
    cout<<"enter petrol in ltr\n";
    cin>>p;
    calc(p);
    show();
}
