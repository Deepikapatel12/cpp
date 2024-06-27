#include<iostream>
using namespace std;
#include<cstring>
int main()
{
 char c[10],s[10];
 char a[20]="deepika",b[10]="deepika";
 //passward match function it is compulsary to use with if and else
 //if we want to check 1st pwd is lower case and 2nd is upper case we want to check and ignore case senctive we use
 //stricmp function it can help to ignore case sensitive is upper or lower it check all latters are same or not
 if(strcmp(a,b)==0)
 {
     cout<<"Matched";
 }
 else
 {
     cout<<"Not Matched";
 }
 cout<<"\n";
 cout<<"Enter your name\n";
 cin>>c;
 //copy function
 strcpy(c,s);
 cout<<c;


 //2 string merge krne k liye
 cout<<strcat(c,s);//it is also called CONCATENATION

 //reverse strrev
 strrev(c);
 cout<<c<<"\n";
 cout<<"Upper ="<<strupr(c)<<"\n";
 cout<<"Enetr Surname\n";
 cin>>s;
 cout<<"Lower ="<<strlwr(s)<<"\n";
}
