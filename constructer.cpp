#include<iostream>
using namespace std;
//Default constructer : in a default constructer there is no parameter of special function
//Constucter never having written type
/*Syntax:
class classname
{
public:classname()
{
code/statement;
}
};
*/


class student
{
    int a;
    public:student()
    {
        a=90;
        cout<<a;
    }
};
int main()
{
    student s;
}
