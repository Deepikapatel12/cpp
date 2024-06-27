#include<iostream>
using namespace std;
//ek program m ek he distructer create kr sakte h ya hota  h multiple i hote
// ~classname(){}

class top
{
    public:top()
    {
        cout<<"good evening\n";
    }
    ~top()   //distructer create
    {
        cout<<"memory released";
    }
};
int main()
{
    top t;
}
