#include<iostream>
#include<conio.h>
using namespace std;
float area(int);
int area(int, int);
int main()
{
    int r;
    cout<<"Enter value of radius: ";
    cin>>r;
    cout<<"Area of the circle: "<<area(r)<<endl;
    int a, b;
    cout<<"Enter len and bred of the ractangle: ";
    cin>>a >>  b;
    cout<<"Area of the rectangle: "<<area(a,b);
    getch();

}
float area(int R)
{
    return (3.14*R*R);

}
int area(int A, int B)
{
    return (A*B);
}