#include<iostream>
using namespace std;
class top
{
    int x;
    public:top(int a)
    {
     x=a;
    }
    top operator +(top &t)
    {
        x=x+t.x;
        cout<<"Result="<<x;
    }
};
int main()
{
    top t1(2);
    top t2(5);
    t1+(t2);
}
