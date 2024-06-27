#include<iostream>
using namespace std;
class top
{
    public:void sum(float f1,float f2)
    {
       cout<<"Float result="<<f1+f2<<"\n";
    }
    void sum(int x, int y)
    {
        cout<<"int="<<x+y<<"\n";
    }

};
int main()
{
    top t;
    t.sum(float(23.65),float(12.8));
    t.sum(3,5);
}
