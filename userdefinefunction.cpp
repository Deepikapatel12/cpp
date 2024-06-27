#include<iostream>
using namespace std;
//user define function
//1function does not return value
//a without argument
//b with argument
//2 function returns value
//a without argument
//b with argument

//functions://block of code and statement to accomplish any task
//1 resubility
//2 time saving
//3 space saving


//without agrument & no return
/* void show()
{
    cout<<"hello\n";
}
int main()
{
    show();
} */


//with argument
int c;
void show()
{
    cout<<"sum="<<c;
}
void sum(int a, int b)
{
    c=a+b;
}
int main()
{
    sum(4,5);
    show();
}

