#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    private:
    int a, b;
    public:
    void setdata(int x, int y)
    {
       a=x; b=y;
    }
    void showdata()
    {
        cout<<"\na= "<<a<<"   b= "<<b<<endl;
    }
    friend void add(complex);
};
void add(complex c)
{
    cout<<"sum is= "<<c.a+c.b<<endl;
}
int main()
{
    complex c1;
    c1.setdata(3, 4);
    c1.showdata();
    add(c1);
    getch();
    return 0;
}
