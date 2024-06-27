#include<iostream>
using namespace std;
// function declared inside a class but defined outside of a class.
class top
{
    public:void sum();
    void sum(int x, int y);
};
void top::sum()
{
    cout<<"Sum Program\n";
}
void top::sum(int x, int y)
{
    cout<<"Sum="<<x+y;
}
int main()
{
    top t;
    t.sum();
    t.sum(3,4);
}
