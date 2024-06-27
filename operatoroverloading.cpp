#include<iostream>
using namespace std;
//Operator overloading
class top
{
    int a;
    public:top()
    {
        a=20;
    }
    void operator ++()
    {
        a=a-1;//operator overloading behaviour change
        cout<<a;
    }
  /*  void operator --()
    {
        a=a+1;
    }
    */
};
int main()
{
    top t;
    ++t;
    //--t;
}
