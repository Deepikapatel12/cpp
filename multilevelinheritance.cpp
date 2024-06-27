#include<iostream>
using namespace std;
//n a multi-level inheritance there are more then two classes an each classes inhrits the property of privious class.

class tenth
{
    public:void result10()
    {
        cout<<"result of 10=80%"<<"\n";
    }
};
class twelth:public tenth
{
    public:result12()
    {
        cout<<"result of 12th=70%"<<"\n";
    }
};
class grd:public twelth
{
    public:void resultgrd()
    {
        cout<<"Result of grd=65%"<<"\n";
    }
};
int main()
{
    grd g;
    g.result10();
    g.result12();
    g.resultgrd();
}
