#include<iostream>
using namespace std;
int main()
{
int a[3][4];
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
    if(a[r][c]==1)
    {

        a[r][c]=0;
         //cout<<a[r][c]<<"\t";
    }
   cout<<a[r][c]<<"\t";

}
cout<<"\n";
}

}
