#include<iostream>
using namespace std;
#include<string.h>
class student
{
    //2 constructor bnyge
    //paramaterize constructor
    //ek or paramertized constructor with the class name
    //object k thrue data get krage
    char *name;
    public:student(char *s)
    {
        name= new char[20];
        strcpy(name,s);
    }
    student(student &ob)//deep copy
    {
        name=new char[20];
        strcpy(name,ob.name);
    }
    void display()
    {
        cout<<"Name= "<<name<<"\n";
    }
    void concat(char *s)
    {
        strcat(name,s);
    }
    int main()
    {
        student obj1("Deepika");
        student obj2(obj1);
        obj1.display();
        obj2.display();
        obj2.concat("patel");
        cout<<"obj1= ";
        obj1.display();
        cout<<"obj2 update=";
        obj2.display();

    }
};
