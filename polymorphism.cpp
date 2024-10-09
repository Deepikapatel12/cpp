 #include<iostream>
using namespace std;

class RBI
{
    public: virtual void loan()
    {
     cout<<"RBI\n";
    }
};
class axis:public RBI
{
    public: void loan()
    {
     cout<<"Axis costumer\n";
    }

};
class pnb:public RBI
{
    public: void loan()
    {
     cout<<"pnb costumer\n";
    }

};

int main()
{
    RBI *p;
    RBI pp;
    axis ax;
    p=&ax;
   // pnb pn;
   // p=&pn;

    p->loan();
}
