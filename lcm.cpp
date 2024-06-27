#include<iostream>
using namespace std;
int main()
{
    int a,b,high,ans;
    cout<<"enter 2 no\n";
    cin>>a>>b;
    high=a>b?a:b;
    do{
        if(high%a==0 && high%b==0)
        {
            cout<<"lcm="<<high;
            break;
        }
        else
        {
            high++;
        }

    }
     while(a);


     //2nd type
  /*   h=a>b?a:b;
     while(1) //1 for true condition
     {
          if(high%a==0 && high%b==0)
        {
            cout<<"lcm="<<high;
            break;
        }h++;
     }    */


    //3rd type

 /*   for(;;) //for infinite
    {
        if(high%a==0 && high%b==0)
        {
            cout<<"lcm="<<high;
            break;
        }
        high++;
    }  */
}
