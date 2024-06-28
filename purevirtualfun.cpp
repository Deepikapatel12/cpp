#include<iostream>
using namespace std;
//pure virtual function also called abstract class
//isme normal object ni bnta
class rbi
{
    public:virtual void loan()=0;
    void msg()
    {
        cout<<"Rbi\n";
    }
};
class sbi:public rbi
{
    public:void loan()
    {
        cout<<"Sbi\n";
    }
};
class axis:public rbi
{
    public:void loan()
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

  //  sbi sb;
  //  axis ax;
  //  rb=&ax;
   // rb=&sb;
    rb->msg();
  //  ax.show();
}

