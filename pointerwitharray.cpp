#include<iostream>
using namespace std;
int main()
{
    int a[]={9,5,8,5,4,8,14,4,8,5,4};
    int *p=a;
   //normal variable m &lgate h but array m & ni lagana padta bs array ka name pass krte h
    p=p+8;
    //jish b indexing ko dekhna h uski indexing ko pass krte h  + lga k direct jump kr sakte h
    cout<<*p<<"\n";
}


