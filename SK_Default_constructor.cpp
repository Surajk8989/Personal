#include<iostream>
#include<conio.h>
using namespace std;
class A
{
   private:
    int a, b;
    public:
    A()                 //constructor of class A
    {
        cout<<"You are in A constructor"<<endl;
    }
};
int main()
{
   A obj1, obj2, obj3; //we can invoke constrctor multiple times by creating multiple objects
   getch();
   return 0;
}