#include<iostream>
using namespace std;
int main()
//reference variable
{
 int a=9;
 //this is a pointer variable this is also called reference variable
 //& is a sign of reference to point any variable to get its  hexa decimal address
 int &p=a;
 p++;
 cout<<"p="<<p<<"\n";
 cout<<"a="<<a<<"\n";
 a--;
 cout<<"p="<<p<<"\n";
 cout<<"a="<<a;
}
