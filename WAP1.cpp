 #include<iostream>
 using namespace std;
 int main()
 {
     int pwd, otp;
     cout<<"Enter password\n";
     cin>>pwd;

     if(2024==pwd)
     {
         cout<<" Enter otp \n";
         cin>>otp;

         if(2026==otp)
         {

             cout<<"Matched \n";
             cout<<"welcome";
         }
         else
         {
             cout<<"you are fraud";
         }

     }
     else
     {
         cout<<"you are fraud";
     }
 }

