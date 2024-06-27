
#include<iostream>
using namespace std;
int main()
{
  float unit,bill;
  cout<<"Enter units\n";
  cin>>unit;
  if(unit>=1 && unit<=50)
    {
        bill=unit*0.50;
        cout<<bill<<"\n";
    }
  else if(unit<=51 && unit>=100)
  {
      bill=unit*0.75;
      cout<<bill<<"\n";
  }
  else if(unit<=101 && unit>=200)
  {
      bill=unit*1.20;
      cout<<bill<<"\n";
  }
  else if(unit<=201 && unit>=250)
  {
      bill=unit*1.50;
      cout<<bill<<"\n";
  }
  else{
        bill=unit*0.2;

    cout<<bill;

  }
  }

