#include<iostream>
using namespace std;
int main()
{
//single dimension array

int d[9];//declaration
d[0]=9;
d[1]=12;

int a[4]={4,5,45,8};//decleration and initilization
int k[]={10,32,40,50,60,70};
int s=sizeof(k)/sizeof(k[0]);//formula to count lenth of an array
cout<<s<<endl;
for(int i=0;i<s;++i)
{

    cout<<k[i]<<"\n";
}

//input from the user
int b[5];
cout<<"enter 5 values of an array\n";
for(int i=0;i<5;i++)
{
    cin>>b[i];
}
cout<<"\nstored values in an array\n";

for(int i=0;i<5;i++)
{
    cout<<b[i]<<"\t";
}
}

