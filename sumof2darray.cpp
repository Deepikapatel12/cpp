#include<iostream>
using namespace std;
int main()
{
int a[3][4];
int total=0;
cout<<"Enter 12 values";

for(int r=0;r<3;r++)
{
    for(int c=0;c<4;c++)
{
   cin>>a[r][c];

}
}
cout<<"output are\n";
for(int r=0;r<3;r++)
{
    for(int c=0;c<4;c++)
{

 cout<<a[r][c]<<"\t";
    total=total+a[r][c];

}

cout<<"\n";
}
cout<<"Sum of Array is  = "<<total;

}
