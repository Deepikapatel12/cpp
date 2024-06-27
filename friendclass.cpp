#include<iostream>
using namespace std;
class cybrom;
class top
{
    int notes=450;
    void show()
    {
        cout<<"Java Notes"<<"\n";
    }
    friend class cybrom;
};
class cybrom
{
    public: void student(top t)
    {
        cout<<t.notes<<"\n";
        t.show();
    }
};

int main()
{
top p;
cybrom c;
c.student(p);
}
