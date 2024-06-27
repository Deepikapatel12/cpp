#include<iostream>
using namespace std;
int main()
{
  int prime[5]={24,3,100,19,7};
  for(int i=0;i<5;++i)
  {
      int c=0;
      int a=prime[i];
      int k=a;
      while(a>=1)
      {
          if(prime[i]%a==0)
          {
              c++;
          }
          a--;

      }
      if(c==2)
      {
          cout<<k<<"\t";
      }
      cout<<"\n";
  }
}
