#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=5;
    std::cout<<"value of x is  "<<x<<endl;
    int &y=x;
    y++;
    std::cout<<"new value of x is  "<<x<<endl;
    getch();
    return 0;

}