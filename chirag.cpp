#include<iostream>
  using namespace std;
  int main()
  {   //1st
      for(int i=1;i<=5;i++)
      {
          for(int j=1;j<=i;++j)
          {
              cout<<j<<"\t";
          }
          cout<<"\n";
      }


      //3rd
      int n=5;
    for(int  r=1;r<=5;++r)
    {
         for(int s=n;s>r;--s)
         {
             cout<<" ";
         }
         for (int c=1;c<=r;++c)
         {
             cout<<c;
         }
         cout<<"\n";
    }
cout<<"\n";

     //4th
    for(int  r=1;r<=5;++r)
    {
         for(int s=5;s>r;--s)
         {
             cout<<" ";
         }
         for (int c=1;c<=r;++c)
         {
             cout<<r<<"\t";
         }
         cout<<"\n";
    }
    cout<<"\n";



      // int n=5;
    for(int  r=1;r<=5;++r)
    {
         for(int s=n;s>r;--s)
         {
             cout<<" ";
         }
         for (int c=1;c<=r;++c)
         {
             cout<<r;
         }
         cout<<"\n";
    }

     for(int i=1;i<=5;i++)
      {
          for(int j=1;j<=i;++j)
          {
              cout<<j<<"\t";
          }
          cout<<"\n";
      }


  }
