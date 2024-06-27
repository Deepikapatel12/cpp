#include<iostream>
using namespace std;
int main()
{
   /* goto c;
    cout<<"sunday\n";
    cout<<"monday\n";
    c:
        cout<<"wednesday";*/
        int n;
        int t=1;
        cout<<"enter any no\n";
        cin>>n;
        table:
            //for proper way to print the table
            cout<<n<<"*"<<t<<"="<<n*t<<"\n";
            //for direct print the table
           // cout<<n*t<<"\n";
            t++;
            if(t<=10)
            {
                goto table;
            }
}
