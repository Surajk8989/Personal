#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
  void fun();
  std::cout<<"You are in main"<<endl;
  fun();
  getch();
}
void fun()
{
    std::cout<<"You are in fun";
}