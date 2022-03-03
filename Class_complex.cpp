#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
   private:
    int a, b;
   public:
    void set_data(int x,int y)
    { a=x; b=y;}
    void show_data()
    {cout<<"a= "<<a<<"\nb= "<<b<<endl;
    cout<< "complex number= "<<a<<"+"<<b<<"i";  
    }
};
int main()
{
    Complex c;
    c.set_data(9, 6);
    c.show_data();
    getch();
    
}