#include<iostream>
using namespace std;
class cybrom
{
    int a,b; //data member


    /*public: Access specifier/Modifier
1. privet
2.public
3. protected
*/
    public:void sum() //member function
    {
        a=10;
        b=40;
        cout<<a+b;

    }
};
int main()
{
    cybrom d;
    d.sum(); //Encapsulation
}
