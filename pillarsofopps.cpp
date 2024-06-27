#include<iostream>
using namespace std;


/*pillars of opps
there are 4 pillars of opps
1). Encapsulation
2).Abstraction
3).Inheritance
4).Polymorphism

object is used to invoke the data member and member function of our class
variable is called data member
(.) dot is called member operator
rapping up of data is called encapsulation
*/
class student
{
     int x,y; //data member
    public:void multiply() //member function
    {
    x=90;
    y=3;
    cout<<x*y;
    }
    void fun()
    {
        cout<<"\n fun\n";
    }
};

int main()
{
    student s;
    s.multiply();// objectname.member function()
    s.fun();
    }
