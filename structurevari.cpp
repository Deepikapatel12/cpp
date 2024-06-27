#include<iostream>
using namespace std;


   struct cybrom
   {
       int bhopal;
       double mp;
   }c; // ese b variable declear kr sakte h

int main()
{

cout<<sizeof(c)<<"\n";
cout<<"Enter Age\n";
cin>>c.bhopal;
cout<<"Enter Salary\n";
cin>>c.mp;
cout<<"Your Age="<<c.bhopal<<"\n";
cout<<"Salary="<<c.mp;
}
