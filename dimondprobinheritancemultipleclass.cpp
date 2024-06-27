#include<iostream>
using namespace std;
//NOTE:There may be a dimond problem in multiple inheritance if and only if the signature of the function are same for multiple classes which will be inherited by it.
class tenth
{
    public:void frnd10()
    {
        cout<<"Friend  10th =80%"<<"\n";
    }
};
class twelth
{
    public:frnd10()
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

}
