#include<iostream>
using namespace std;
class A
{
    public:void f1()
    {
        cout<<"this is A f1 function\n";
    }
};

class B:public A
{
    public:void f2()
    {
        cout<<"this is B f2 function\n";
    }
};

class C:public A
{
    public:void f3()
    {
        cout<<"this is C f3 function\n";
    }
};

class D: public A, public B,public C
{
    public:void f4()
    {
        cout<<"this is D f4 function\n";
    }

};
int main()
{
    D d;
  // d.f1();
    d.f2();
    d.f3();
    d.f4();
    B b;
    b.f1();

}
