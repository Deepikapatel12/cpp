 #include<iostream>
 using namespace std;
 int main()
 {
     float tenth, twelth;
     cout<<"Enter % of 10th\n";
     cin>>tenth;
     if(tenth>=80)
     {
         cout<<"Enter your 12th %\n";
         cin>>twelth;
         if(twelth>60)
         {
             cout<<"elgbl for clerk post";
         }
         else
         {
             cout<<"elegbl for peon";
         }

     }
     else
     {
         cout<<"not elgbl";
     }
 }
