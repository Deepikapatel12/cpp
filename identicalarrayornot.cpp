#include<iostream>
using namespace std;
int main()
{
     //write a program to find out two arrays are idendical or not
     int f=0;
 int a[3][3]={1,2,3,4,5,6,7,8,9};
 int b[3][3]={1,2,3,4,5,6,7,8,7};
 for(int i=0;i<3;i++)
 {
 for(int j=0;j<3;j++)
 {
     if(a[i][j]!=b[i][j])
     {
         f=1;
         break;
     }
 }

}
if(f==1)
{
    cout<<"Not Identical\n";

}
else{
    cout<<"Identical\n";
}

}
