
#include<iostream>
using namespace std;
class top
{
    public:void table(int x)
    {
        for(int i=1;i<=10;i++)
        {
            cout<<x*i<<"\n";
        }
    }

};
int main()
{
    top t;
    t.table(3);
}
