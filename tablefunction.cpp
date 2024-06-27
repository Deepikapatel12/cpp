#include<iostream>
using namespace std;
void table(int n)
{
  for(int i=1;i<=10;i++)
  {
      cout<<n*i<<"\n";
  }

}
int main()
{
    int n;
    cout<<"enter no";
    cin>>n;
    table(n);
}
