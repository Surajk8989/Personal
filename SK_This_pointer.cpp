#include<iostream>
#include<conio.h>
using namespace std;
class Body
{
    private: 
     int a, b, c;
     public:
     void setValue(int, int, int);
     void showValue();
};
void Body::setValue(int a, int b, int c)
{
    this->a=a; b=b; this->c=c;
}
void Body::showValue()
{
    cout<<"value of a= "<<a<<"  b= "<<b<<"  c= "<<c<<endl;
}
int main()
{
    Body B, *p;
    p= &B;
    p->setValue(10,100,1000);
    p->showValue();
    getch();
    return 0;
}