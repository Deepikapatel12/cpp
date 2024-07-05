#include<iostream>
using namespace std;
class rbi
{
    public:void msg()
    {
        cout<<"rbi msg";
    }
};
class sbi:virtual public rbi
{

};
