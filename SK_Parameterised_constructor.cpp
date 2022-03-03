#include<iostream>
#include<conio.h>
using namespace std;
class Add
{
    private:
    int a, b;
    public:
    Add(int x, int y)
    {
        a=x;
        b=y;
        cout<<"a= "<<a<<"\nb= "<<b<<endl;
    }
    Add(int z)
    {
        a=z;
        cout<<"a= "<<a<<endl;
    }
    /*int add()
    {
        std::cout<<"a= "<<a<<"\nb= "<<b<<endl;
        std::cout<<"a= "<<a<<endl;
    }*/
};
int main()
{
    Add A1(8, 9), A2(6);
    //A1.add();
    //A2.add();
    getch();
    return 0;
}