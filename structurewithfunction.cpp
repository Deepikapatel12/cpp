#include<iostream>
using namespace std;
struct cybrom
{
    int bhopal;
    char mp[20];
    void input(char cname[20],int age)
    {
        cout<<"name ="<<cname<<"\n";
        cout<<"age ="<<age<<"\n";
    }
    void show()
    {
        cout<<"Hello"<<"\n";
    }
};
int main()
{    struct cybrom c;
    c.show();
    cout<<"Enter your name\n";
    cin>>c.mp;
    cout<<"Enter your age\n";
    cin>>c.bhopal;
    c.input(c.mp,c.bhopal);
}
