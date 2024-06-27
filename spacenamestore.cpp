#include<iostream>
using namespace std;
int main()
{
char c[10];
cout<<"Enter Name=";
// kbhi b run time m space ni diya jata ni to bo terminate kr deta h age hume space k sath name strore krna h space b count ho to
// cin.getline function ka use krte h isme 2 object pass kiye jate h
// 1st variable ka name and 2nd size of variable
//ish se bo space k sath value store krta h
cin.getline(c,10);
cout<<"Name="<<c;
}
