
#include<iostream>
using namespace std;

//protected class ko main k and kbhib access ni kr sakte humesa child class k function k andr call kr sakte h
class parent
{     int p;
    public:parent()
    {
        cout<<"Assign memory of parent class\n";
    }
    ~parent()
    {
        cout<<"Relaesed memory ofparent class\n";
    }
    protected:void display()
    {
         cout<<"\nParent class\n";
    }
};
class child:public parent
{
    public:int b;
    public:child()
    {
        cout<<"\n Assgn memory of child class \n";
    }
    ~child()
    {
        cout<<"release memory of child class\n";
    }
    public:void show()
    {
        display();
        cout<<"\nchild class\n";
    }
};
int main()
{
    child c;
    cout<<sizeof(c);
    c.b=90;
    cout<<"\n"<<c.b;
    c.show();

}
