#include<iostream>
using namespace std;
//SINGLE THREAAD

//main function is called single thread
#include<iostream>
using namespace std;
//MILTI THREAD
#include<thread>
void even(int s,int e)
{
    for(s;s<=e;s++)
    {
        if(s%2==0)
        {
            cout<<"even no="<<s<<"\t";
        }
    }
}
void odd(int s, int e)
{
    for(s;s<=e;s++)
    {
        if(s%2!=0)
        {
            cout<<"odd no="<<s<<"\t";
        }
    }
}
int main()
{
    even(1,1000);
    odd(1,1000);
}
