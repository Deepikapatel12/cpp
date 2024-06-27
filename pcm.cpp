 #include<iostream>
using namespace std;
int main()
{

    int p,c,m,t,per;
    cout<<"Enter marks of three subject\n";
    cin>>p>>c>>m;
    t=p+c+m;
    per=t/3;
    if(per>=60)
    {
        cout<<"first division\n";
    }
    else if(per<60 && per>=50)
    {
        cout<<"second division\n";
    }
    else if(per<50 && per>=40)
    {
        cout<<"third division\n";
    }
    else{
        cout<<"fail";
    }
}
