#include<iostream>
using namespace std;
class atm
{
    int amount;
    public:atm()
    {
        amount =10000;
    }
    void show()
    {
        cout<<"Amount="<<amount<<"\n";
    }
};
int main()
{
    atm p1;
    p1.show();
  //  atm p2=p1; //assignment overload//implicit assignment copy constructer
    //isme bs data copy hota h ek ki value dushre m assign hona

    atm p2(p1); //call copy constructer //shallow copy
    //ye copy constructer and shallow copy ko call krne ka
    p2.show();
}
