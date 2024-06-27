#include<iostream>
using namespace std;
int main()
{
    int m='b';
    for(int i=1;i<=3;++i)
    {
        for(int j=1;j<=3;++j)
        {
         if(m=='a')
         {
             m++;
         }
         else
         {
             m--;
         }
         cout<<char(m)<<"\t";

        }
        cout<<"\n";
    }
}
