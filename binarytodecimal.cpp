#include<iostream>
using namespace std;
    #include<math.h>
    int main()
    {
    int n;
    int bit;
    int i=0;
    int result=0;
    cout<<"enter binary no \n";
    cin>>n;
    while(n!=0)
    {
        bit=n%10;
        if(bit==1)
        {
            result=bit*pow(2,i)+result;
        }
        n=n/10;
        i++;
    }
    cout<<"Decimal No="<<result;
    }
