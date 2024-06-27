#include<iostream>
using namespace std;

/*
 user defined function
    int mais() is the entry point of your program
    user defined function humesha main function k uper bnate h
    there are two types of user defined function
    1. function without return value
    a. without parameter
    b. with parameter
    2. function returns value
     a. without parameter
    b. with parameter



    jo function value return ni krta uske age humesha void likha rhta h
    without return value and without parameter syntax
    void functionname()
    {
    code/statement
    }

    */



    ///without parameter and no-return
    void show()
    {
        cout<<"Welcome\n";
    }
    ///no-return with parameter
    void sum(int a,int b)  //(int a,int b) ye parameter h   also called formal parameter
    {
        int c;
        c=a+b;
        cout<<c;
    }
int main()
{
   show();
   sum(9,8);    //(9,8)argument h   also called actual parameter
}
