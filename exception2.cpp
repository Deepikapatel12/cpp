#include<iostream>
using namespace std;
//SINGLE TRY WITH MULTIPLE CATCH

void cybrom(int c)
{
try
{
    if(c==1)
    {
        throw 1;
    }
    else if(c==-1)
    {
        throw 2.5;
    }
    else if(c==0)
    {
        throw 'c';
    }
    cout<<"welcome";
}
catch(int c)
{
    cout<<"caught integr\n";
}
catch(double c)
{
    cout<<"cautch doubble\n";
}
catch(char c)
{
    cout<<"caught character\n";
}
}
int main()
{
    cybrom(1);
    cybrom(0);
    cybrom(-1);
    cybrom(30);
}
