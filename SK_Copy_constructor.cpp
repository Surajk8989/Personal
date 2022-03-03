#include<iostream>
#include<conio.h>
using namespace std;
class addition
{
    private: 
    int a, b;
    public:
    addition(int x, int y)      //Paramerized constructor
    {
        a=x;
        b=y;
        cout<<"Two parameters-  "<< "\na= "<<a<<" b= "<<b<<endl;
    }
    addition(int k)
    {
        a=k;
        cout<<"Single parameter-  "<<"\na= "<<a<<endl;
    }
    addition()      //Default constructor
    {a=0; b=0;}
    addition(addition &ad)
    {
        a=ad.a;
        b=ad.b;
        cout<<"Parameters from copy constructor-  "<<"\na= "<<a<<"b= "<<b<<endl;
    }
};
int main()
{
    addition ad1(10, 12), ad2, ad3(9);
    addition ad4(ad1);
    getch();
    return 0;

}