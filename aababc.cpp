#include<iostream>
using namespace std;
int main()
{
    char ch='a';

   for(int i=1;i<=3;++i)
    {
       //char ch='a';
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<"\t";
               ++ch;
        }
        cout<<"\n";
    }

}
