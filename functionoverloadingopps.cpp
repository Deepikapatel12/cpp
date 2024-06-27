#include<iostream>
using namespace std;

//function overloading same name multiple functions
//class having the overloaded function
//FUNCTION OVERLOADED ===if a class having the same name of functions with different signature or prototype is considered as a function overloaded
//1)function Declared and defined inside a class
//(2). function declared inside a class but defined outside of a class.

class top
{
    int a,b;
    public:void sum()
    {
        cout<<"Sum Program\n";
    }
    void sum(int a, int b)
    {
        cout<<"Sum="<<a+b;
    }
};
int main()
{
    top t;
    t.sum();
    t.sum(3,5);
}
