#include<iostream>
using namespace std;
int main()
{

     char c[]="cybrom";
     //NULL='\0'
    for(int i=0;c[i]!='\0'; i++)
    {
        c[i]=c[i]-32;
    }
     cout<<c;




     //for capital to small
    /*  char c[]="CYBROM";
     //NULL='\0'
    for(int i=0;c[i]!='\0'; i++)
    {
        c[i]=c[i]+32;
    }
     cout<<c;*/
}
