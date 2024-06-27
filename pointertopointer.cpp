#include<iostream>
using namespace std;
int main()
{
 //Double pointer is also called ppinter to pointer
int a[]={9,8,7,4,5,6,2,4,5};
int *p=a;
int **k=&p;
cout<<**k<<"\n";
}
