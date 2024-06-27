
#include<iostream>
using namespace std;
int main()
{
    //for user input
   /* char c[5];
    cout<<"enter name\n";
    cin>>c;*/
    char c[]="CyBRoM";
    for(int i=0;c[i]!='\0';++i)

    {
     if(c[i]>=65 && c[i]<=97)
     {
        c[i]=c[i]+32;
     }
     else if(c[i]>=97 && c[i]<=122)
     {
         c[i]=c[i]-32;
     }
    }
    cout<<c;
}
