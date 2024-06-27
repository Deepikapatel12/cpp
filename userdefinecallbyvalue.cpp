#include<iostream>
using namespace std;


//call by value m data 2 gagha copy hota h
//no return no parameter bs display print krne or calculation krne ka km krta h isme kbhi b input ni mangta


 int c;
 void show()//without parameter no return
 {
  cout<<"sum="<<c;
 }
 void sum(int a, int b)//with parameter & no return
 {
 c=a+b;
 }
 int main()
 {
 int x,y;
 cout<<"Enter 2 values"<<"\n";
 cin>>x>>y;
 sum(x,y);//call by value
 show();
 }
