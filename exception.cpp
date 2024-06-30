#include<iostream>
using namespace std;
//EXCEPTION HANDLING

int main()
{
    int a,b,c;
    try
    {
        cout<<"enter first number\n";
        cin>>a;
        cout<<"enter second number\n";
        cin>>b;
        if(b==0)
        {
            throw b;
        }
        c=a/b;
        cout<<"result="<<c<<"\n";
    }
        catch(int b)
        {
        cout<<"denominator should not be zero\n";
        }
    cout<<"\ndone";

}
