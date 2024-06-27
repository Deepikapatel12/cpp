#include<iostream>
using namespace std;
//with the help of friend function we can access the private or protected member of any class outside of it

 //friend function example
class priyansh;
class ravikesh
{
    int marks;
    public:void result_tenth(int m)
    {
        marks=m;
    }
    friend void result(priyansh,ravikesh);
};
class priyansh
{
    int marks;
    public: void result_tenth(int m)
    {
    marks=m;
    }
    friend void result(priyansh,ravikesh);
};
void result(priyansh p,ravikesh r)
{
    if(p.marks>r.marks)
    {
        cout<<"priyansh got max marks="<<p.marks;
    }
    else
    {
        cout<<"ravikesh got max marks="<<r.marks;
    }
}
int main()
{
    ravikesh r;
    r.result_tenth(67);
    priyansh p;
    p.result_tenth(79);
    result(p,r);
}
