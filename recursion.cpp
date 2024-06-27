#include<iostream>
using namespace std;



//Function calling itself is called recursion
//jo function apne pp ko he byulata h use recursion bolte h
//there are 2 types of recursion
//1 Head recursion
//2 Tail Recursion

 //jb phle function ko call kr  rhe h print bd m kr rhe h to bo Tail recursion kehte h
 //phle print krna bd m call krna use Head recursion kehte h
 //tail recursion is also called backtracking

 void count(int n)
 {
     if(n==0)
     {
         return;
     }
    // cout<<n<<"\n"; head recursion
    //count(n-1);
     count(n-1);
    cout<<n<<"\n";//tail recursion
 }
int main()
{
int n;
cout<<"Enter Value\n";
cin>>n;
count(n);

}


