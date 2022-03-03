#include<iostream>
#include<conio.h>
using namespace std;
class Alpha
{
    
     int a;
    protected:
    void setvalue(int m)
    {
        a=m;
    }
    
};
class Beta: public Alpha
{
   
    public:
    void setdata(int x)
    {
        setvalue(x);
    }
     void showdata()
    {
        cout<<"value of a is= "<<setvalue(m)<<endl;     //ERROR
    }
    
};
int main()
{
    Beta obj;
    obj.setdata(100);
    obj.showdata();
    getch();
    return 0;

}