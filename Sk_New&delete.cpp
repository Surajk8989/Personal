#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *ptr=new int(500);      //assigned memory
    
    cout<<"value at the address ptr: "<<*ptr<<endl;
    cout<<"Address of ptr: "<<ptr<<endl;

    delete ptr;                 //deleted the memory

    cout<<"New value at address ptr: "<<*ptr<<endl;
    cout<<"New address of ptr: "<<ptr<<endl;

    getch();
    return 0;
}