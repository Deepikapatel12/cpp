
#include<iostream>
using namespace std;

/*
single inheritance == In a single inheritance we use only two classes
where the first class is called parent class Aand the econd class is called child class and we can creat object of child class.
and inherit the property of parent class by using public keyword.
single inheritance only have 2 class not more than 2

Syntax:
   	class parentclass
	{
	data members;
	function();
	};
	class childclass:public parentclass
	{
	datamember
	function();
	};


*/

/*
output
Assign memory of parent class
Assign memory of child class
child class
parent class
released memory of child class
release memory of parent class
*/

class parent
{     int p;
    public:parent()
    {
        cout<<"Assign memory of parent class\n";
    }
    ~parent()
    {
        cout<<"Relaesed memory ofparent class\n";
    }
    public:void display()
    {
         cout<<"\nParent class\n";
    }
};
class child:public parent
{
    public:int b;
    public:child()
    {
        cout<<"\n Assgn memory of child class \n";
    }
    ~child()
    {
        cout<<"release memory of child class\n";
    }
    public:void show()
    {
        cout<<"\nchild class\n";
    }
};
int main()
{
    child c;
    cout<<sizeof(c);
    c.b=90;
    cout<<"\n"<<c.b;
    c.show();
    c.display();
}
