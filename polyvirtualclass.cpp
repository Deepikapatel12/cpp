#include<iostream>
using namespace std;
class rbi
{
    public:virtual void msg()
    {
        cout<<"Rbi\n";
    }
};
class sbi:public rbi
{
    public:void msg()
    {
        cout<<"Sbi\n";
    }
};
class axis:public rbi
{
    public:void msg()
    {
        cout<<"Axis\n";
    }
    void show()
    {
        cout<<"Axis normal function\n";
    }
};
int main()
{
    rbi *rb;//pointer object
    rbi nrb;//normal object
    sbi sb;
    axis ax;
    rb=&ax;
   // rb=&sb;
    rb->msg();
    ax.show();
}
