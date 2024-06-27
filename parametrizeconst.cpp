#include<iostream>
using namespace std;
//In A PArametrize constructer we will use prameter at the time of creating it
class top
{
    public:top()//default constructer
    {
        cout<<"welcome\n";
    }
    top(int a,int b)//parametrize constructer
    {
        cout<<"sum="<<a+b;
    }
    top(int t)
    {
        cout<<"\n ok";
    }
};
int main()
{
    top t;
    top(12,5);
    top(90);
}
