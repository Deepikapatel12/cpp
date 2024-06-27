 #include<iostream>
 using namespace std;
 int main()
 {
     int a;
     cout<<"Enter any no";
     cin>>a;
    // if(a%2==0)  //if((a%2)?0:1)
        if((a%2)?0:1)
     {
         cout<<"Even no";
     }
     else
     {
         cout<<"odd no";
     }
 }
