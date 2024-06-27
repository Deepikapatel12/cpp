#include<iostream>
using namespace std;
class  top
{
    int a;
    public:void get(int a)
    {
        this->a=a;
    }
    void cybrom()
    {
        cout<<"a="<<a;
    }
};
int main()
{
    top p;
    p.get(30);
    p.cybrom();
}
