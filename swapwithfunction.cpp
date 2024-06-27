#include<iostream>
using namespace std;

//W.A.P for swapping variable using function

int c;
void swaps(int &a, int &b)//call by reference
{
   c=a;
   a=b;
   b=c;
   cout<<"After  swaping A="<<a<<"\n";
   cout<<"After  swaping B="<<b<<"\n";

}

int main()
{
    int a,b;
    cout<<"enter 2 values\n";
    cin>>a>>b;
  swaps(a,b);
  cout<<"A= "<<a<<"\n";
  cout<<"B= "<<b<<"\n";

}
