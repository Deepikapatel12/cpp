#include<iostream>
using namespace std;
int main()
{
    int n1=0;
    int n2=1;
    int term;
    int i=1;
    int k=0;
    cout<<"enter term\n";
    cin>>term;
    //print 0 and 1 also
    cout<<n1<<"\t"<<n2<<"\t";
    while(i<=term)
    {
        k=n1+n2;
        n1=n2;
        n2=k;
        i++;
        //for generate all series we want
      cout<<k<<"\t";
    }
    //only print given term
  //  cout<<k;
}
