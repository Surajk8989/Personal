#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
    virtual void fun1()                      /*using virtual keyword we made this function virtual 
                                             to show the functionality from the second derived class*/
    {cout<<"You are in Base class"<<endl;}
};
class B:public A
{
    void fun1()
    {cout<<"You are in derived class one"<<endl;}
};
class C:public B
{
    void fun1()
    {cout<<"You are in derived class two"<<endl;}
};
int main()
{
    A *ptr, obj1;
    C obj2;
    ptr=&obj2;
    ptr->fun1();         //without virtual keyword this will access member of the base class
    return 0;
}