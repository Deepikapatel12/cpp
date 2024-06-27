#include<iostream>
using namespace std;

//universal truth ble program m kbhi b return type se  ni banate
//without parameter and return value
int product()
{
    return 100;
}
//with parameter return value
int mobile(int q)
{
    return q*1500;
}
int main()
{
    int c;
    cout<<"Product rate="<<product()<<"\n";
    cout<<"Enter Quantity of mobile\n";
    cin>>c;
    cout<<"Bill="<<mobile(c)+c*300;
}
