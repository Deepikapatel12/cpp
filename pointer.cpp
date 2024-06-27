#include<iostream>
using namespace std;
int main()
//pointer m next adress ko get kr sakte h
{
 int a=9;
 cout<<"a="<<&a<<"\n";
 //jb b kisi pointer ko declear krte h to uske samne NULL lagana cumpulsary h ni to bo garbage value get krta h null se value 0 ho jati h
 //address pointer variable ko assign kr sakte h normal variable ko ni ni to error a jati h
 int *p=NULL;// p is a pointer variable
 //this is called address
 p=&a;
 cout<<"address of a="<<p<<"\n";
 cout<<"Value="<<*p<<"\n";
 //p++;
 //this is called D reference
 cout<<p<<"\n";//next address
 cout<<*p;//garbage value
}
