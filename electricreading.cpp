
#include<iostream>
using namespace std;
int main()
{
  int r;
  cout<<"Enter meter reading\n";
  cin>>r;
  if(r>=1 && r<=100)
    {
        cout<<r*5;
    }
  else if(r>=101 && r<=500)
  {
      cout<<r*7;
  }
  else if(r>=501 && r<=1000)
  {
      cout<<r*9;
  }
  else if(r>=1001 && r<=10000)
  {
      cout<<r*15;
  }
  else{
    cout<<"negative value not allow";
  }
  }

