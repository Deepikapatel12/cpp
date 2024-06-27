#include<iostream>
using namespace std;
//composite class
class top
{
    public:void show()
    {
        cout<<"show function\n";
    }
};
    class bottom
    {
        public:void display()
        {
            top p;
            cout<<"display Function\n";
            p.show();
        }
    };


int main()
{
    bottom b;
    b.display();
}
