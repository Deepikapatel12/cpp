#include<iostream>
using namespace std;
class top
{
    public:void show(int a, int b=90)//default argument
    {
        cout<<a+b<<"\n";
    }
};
int main()
{
    top b;
    b.show(20);
    b.show(200);
}
