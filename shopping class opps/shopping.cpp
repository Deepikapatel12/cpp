#include<iostream>
using namespace std;
#define n 20

class shopping
{
    int itemcode [n];
    int price[n];
    int cnt;
    public:shopping()
    {
        cnt=0;
    }
    public:void getorder();
    void display();
    void cancel();
};
void shopping::getorder()
{
    cout<<"\n Enter item code\n";
    cin>>itemcode[cnt];
    cout<<"\ Enetr price\n";
    cin>>price[cnt];
    cnt++;
}
void shopping::display()
{
    for(int i=0;i<cnt;i++)
    {
        cout<<"Itemcode="<<itemcode[i]<<"\n";
        cout<<"Price="<<price[i]<<"\n";
    }
}
void shopping::cancel()
{

}
