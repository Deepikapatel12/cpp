#include<iostream>
using namespace std;
class even
{
    public:void odd(int n)
    {
       // cout<<"enter number\n";
       // cin>>n;
        if(n%2==0)
        {
            cout<<"even\n";
        }
        else{
            cout<<"odd";
        }
    };
};
int main()
{even e;
int a;
cout<<"enter num\n";
cin>>a;
e.odd(a);
}
