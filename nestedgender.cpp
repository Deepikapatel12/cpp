#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter m M or f F\n";
    cin>>c;
        if(c=='m' || c=='M')
    //if (male=='m' || male=='M')
        {
            cout<<"you are male";
            //cin>>male;
        }
           else if(c=='f' || c=='F')
                {
                 cout<<"you are female";
                 // cin>>female;
                }
              else
                {
                  cout<<"other gender";
                }
}
