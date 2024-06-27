
#include<iostream>
using namespace std;
//In a multiple inheritance we also create more then two classes but child class inherits the property of multiple classes at a time.

class tenth
{
    public:void frnd10()
    {
        cout<<"Friend  10th =80%"<<"\n";
    }
};
class twelth
{
    public:frnd12()
    {
        cout<<"Friend  of 12th =70%"<<"\n";
    }
};
class grd:public twelth,public tenth
{
    public:void frndgrd()
    {
        cout<<"Friend of grd=65%"<<"\n";
    }
};
int main()
{
    grd g;
    g.frnd10();
    g.frnd12();
    g.frndgrd();
}
