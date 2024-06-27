#include<iostream>
using namespace std;

class atm
{
    int amount;
    int *location;
    public:atm(int amt, int loc)
    {
        amount=amt;
        location=&loc;
    }
    void update()
    {
        amount=amount+1000;
        *location=*location+1;
    }
    void show()
    {
      cout<<"Amount ="<<amount<<"\n";
      cout<<"Location ="<<*location<<"\n";
    }
};
int main()
{
    atm p1(10000,101);
    cout<<"p1 info\n";
    p1.update();
    p1.show();
    atm p2(p1);
    cout<<"p2 location\n";
    p2.update();
    p2.show();
    cout<<"p1 info\n";
    p1.update();
    p1.show();
}
