/*  #include <iostream>
using namespace std;

int main()
 {
    int number,digit,product=1;
    cout << "Enter a number: ";
    cin>>number;

    while (number>0)
        {
     digit=number%10;
   //  number/10;

    product=digit*product;
   number= number/10;

 //cout<<"The product of the Digits is: "<<product<<"\n";
    }
   cout<<"The product of the Digits is: "<<product<<"\n";

 }*/




/*#include<iostream>
using namespace std;
int main()
{
int a,last,middle,first;
cout<<"enter no\n";
cin>>a;


first=a%10;
a=a/10;
 while(a>0)
{
    middle=a%10;
    a= a/10;
    last=a%10;
    a=a/10;

}

cout<<first+middle+last;

}*/

  /*#include<iostream>
using namespace std;
int main()
{ int number,sum=0;
cout<<"enter any number:";
cin>>number;
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum= i+sum;
        }
    }
    if (sum == number) {
        cout << number << " is a perfect number." <<"\n";
    }
     else
        {
        cout << number << " is not a perfect number." <<"\n";
    }

}*/

 /* #include<iostream>
using namespace std;
void pwr(int b, int p)
{
    int r=b;
    for(int i=0;i<p;i++)
    //while(p>1)
    {
        r=r*b;
        p--;
    }
    cout<<"result="<<r;
}
int main()
{
    int a,b;
    cout<<"enter bse\n";
    cin>>a;
    cout<<"enter power\n";
    cin>>b;
    pwr(a,b);

} */

 /*    #include<iostream>
using namespace std;
int main()
{
     int num,factorial=1;

    cout << "Enter any number : ";
    cin >> num;

  //  cout << "Factorial of " <<num<< " are: ";
    for(int i=1;i<=num;++i) {
       factorial=i*factorial;
    }
    cout<<"factorial of " <<factorial<<"\n";
}*/












