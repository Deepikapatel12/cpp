//create a table by using parametrize constructer
#include<iostream>
using namespace std;
class table
{
    public:table(int a)
    {
      for(int i=1;i<=10;i++)
        {
            cout<<a*i<<"\n";
        }
    }


};
int main()
{
    int a;
    cout<<"enter any no\n";
    cin>>a;

    table t(a);
}
