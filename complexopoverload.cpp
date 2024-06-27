#include<iostream>
using namespace std;
//How can we find two complex number
class plot
{
    public:int feet,inch;
    plot(int f,int i)
    {
        feet=f;
        inch=i;
    }
    plot operator +(plot &p)
    {
        feet=feet+p.feet;
        inch=inch+p.inch;
        cout<<"Total "<<feet<<" feet"<<"\n";
        cout<<"Total "<<inch<<" inch"<<"\n";
    }
};
int main()
{
    plot p1(6,2);
    plot p2(2,4);
    plot p3=p1+p2;
}
