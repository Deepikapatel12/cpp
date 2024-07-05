/*#include<iostream>
using namespace std;
class student
{
    char sname[11];
    int marks[5];
    int total=0;
    int tmax=0;
    public:void assign()
    {
        cout<<"enter the sname: ";
        cin>>sname;
        cout<<"enter the marks: ";
        for(int i=0; i<5; ++i)
        {
            cin>>marks[i];
        }
    }
    void compute()
    {
        for(int i=0; i<5; ++i)
        {
            total=total+marks[i];
            if(tmax<marks[i]);
            {
                tmax=marks[i];
            }
        }
    }
    void display()
    {
        cout<<"total number:"<<total;
        cout<<"tmax number:"<<tmax;
    }
};
int main()
{
    student s;
    s.assign();
    s.compute();
    s.display();
}


*/
/*#include<iostream>
using namespace std;
class raj
{
    static int a;
    public:raj()
    {
        a++;
    }
    public:void show()
    {
      cout<<a;
    }
};
int raj::a=0;
int main()
{
    raj j;
    raj j2;
    raj j3;
    j3.show();

}*/



/*#include<iostream>
using namespace std;
class raj2;
class raj
{
    int x=30;
    public:friend void sum(raj obj,raj2 obj2);
};
class raj2
{
    int y=110;
    public:friend void sum(raj obj , raj2 obj2);
};
void sum(raj obj, raj2 obj2)
{
    if(obj.x>obj2.y)
    {
        cout<<obj.x;
    }
    else
    {
        cout<<obj.x+obj2.y;
    }
}
int main()
{
    raj r1;
    raj2 r2;
    sum(r1,r2);
}
*/


/*#include<iostream>
#include<cstring>
using namespace std;
class shop
{
    int ItemCode[100];
    string ItemName[100];
    float price[100];
    int total=0;
    int count=0;
    public:void add()
    {
        for(int i=0; i<100; ++i)
        {
            cout<<"enter the ItemCode:";
            cin>>ItemCode[i];
            cout<<"enter the ItemName:";
            cin>>ItemName[i];
            cout<<"Enter the Item Price:";
            cin>>price[i];
            int n;
            cout<<"Press 1 for continue or 0  for generate the bills:";
            count++;
            cin>>n;
            if(n==1)
            {
                continue;
            }
            else
            {
                break;
            }
        }
    }
    void show()
    {
        cout<<"\n";
        cout<<"Item-Code\t"<<"Item-Name\t"<<"Price\t"<<"\n";
        for(int i=0; i<count; ++i)
        {
            cout<<ItemCode[i]<<"\t\t"<<ItemName[i]<<"\t\t"<<price[i]<<"\n";
            total=total+price[i];
        }
        cout<<"\n";
        cout<<"Total Price:"<<total;
    }
    void CountItem()
    {
        cout<<"\n";
        cout<<"Total number of item:"<<count<<"\n";
    }
    void cancel()
    {
        cout<<"\n";
        int s;
        cout<<"Press Itemcode for cancel the product: ";
        cin>>s;
        for(int i=0; i<count; ++i)
        {
            if(ItemCode[i]==s)
            {
                ItemCode[i]=0;
                ItemName[i]="0";
                price[i]=0;
                total=0;
            }
        }
    }
};
int main()
{
    shop p;
    p.add();
    p.show();
    p.CountItem();
    p.cancel();
    p.show();
}
*/
/*#include<iostream>
using namespace std;
class fib
{
    int n1=0;
    int n2=1;
    int f=0;
    public:fib(int n)
    {
        cout<<n1<<"\t"<<n2<<"\t";
        while(n!=0)
        {
            f=n1+n2;
            n1=n2;
            n2=f;
            cout<<f<<"\t";
            n--;
        }
    }
};
int main()
{
    fib f(5);
}*/

