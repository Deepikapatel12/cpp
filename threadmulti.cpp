#include<iostream>
using namespace std;
//MILTI THREAD
#include<thread>
//to use thread include thread class
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
    thread t(even,1,1000);//thread is a class name it is compulsary to write thread
    thread t1(odd,1,1000);
    t.join();
    t1.join();
    if(t1.joinable())//to stop system error join any function to write that
    {
        t1.join();
    }
    cout<<"DONE";
}
