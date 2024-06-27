#include<iostream>
using namespace std;
//Hierarchical Inheritance

class rgpv
{
    public:void boss()
    {
        cout<<"University\n";
    }
};
class tit:public rgpv
{
    public:void student()
    {
        cout<<"tit student\n";
    }
};
class oist:public rgpv
{
    public:void student()
    {
        cout<<"oist Stuudent\n";
    }
};
class lnct:public rgpv
{
    public:void student()
    {
        cout<<"lnct student\n";
    }
};
int main()
{
    tit t1;
    t1.student();
    t1.boss();
    oist t2;
    t2.student();
    t2.boss();
    lnct t3;
    t3.student();
    t3.boss();
}
