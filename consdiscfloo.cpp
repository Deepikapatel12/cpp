#include<iostream>
using namespace std;
class tenth{
public:tenth()
{
    cout<<"10 cons"<<"\n";
};
~tenth()
{
    cout<<"10 disc\n";
}
};
class twelth{
public:twelth()
{
    cout<<"12 cons\n";
}
~twelth()
{
    cout<<"12 distructer\n";
}
};
class grd:public tenth,public twelth
{
    public:grd()
    {
        cout<<"grd cons\n";
    }
    ~grd()
    {
        cout<<"grd distrcter\n";
    }
};
int main()
{
    grd g;
}
