#include<iostream>
using namespace std;
 /* 1 structure : is used for user defined datatype as well as function
   2 structure is a collection of user define datatype
   syntax: struct structure name
   {
   datatypr variable;
   datatype variable;
   etc
   };
   */

// Note:  by default the specifier or modifier of a structure is public

   struct cybrom
   {
       int bhopal;
       double mp;
   };

int main()
{
struct cybrom c; //c is a variable od cybrom
cout<<sizeof(c)<<"\n";
cout<<"Enter Age\n";
cin>>c.bhopal;
cout<<"Enter Salary\n";
cin>>c.mp;
cout<<"Your Age="<<c.bhopal<<"\n";
cout<<"Salary="<<c.mp;
}
