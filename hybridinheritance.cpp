#include<iostream>
using namespace std;
class class1
{
    public:void f1()
    {
        cout<<"class1 f1\n";
    }
};
class class2:public class1
{
    public:void f2()
    {
        cout<<"class2 f2\n";
    }
};
class class3
{
    public:void f3()
    {
        cout<<"class3 f3\n";
    }
};
class class4:public class3
{
    public:void f4()
    {
        cout<<"class4 f4\n";

    }
};
class class5:public class4
{
    public:void f5()
    {
        cout<<"class5 f5\n";
    }
};
class class6:public class2, public class5
{
    public:void f6()
    {
        cout<<"class6 f6\n";
    }
   /* void all()
    {
    f6();
    f1();
    f2();
    f3();
    f4();
    f5();

    } */
};


int main()
{
    class6 a;
 //   a.all();
     a.f6();
     a.f1();
    a.f2();
     a.f3();
    a.f4();
    a.f5();
}

