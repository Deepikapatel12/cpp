#include<iostream>
using namespace std;
//abstract class
class rbi
{
    public:virtual void loan()=0;
    void mag()
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
  public:void show()
    {
        cout<<"Axis normal function\n";
    }
};
int main()
{
    rbi *rb;//pointer object


    rb->msg();

    sbi sb;
    rb=&sb;
   // rb=&sb;
    rb->loan();

}
