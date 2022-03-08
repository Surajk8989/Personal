#include <iostream>
using namespace std;
int multi(int a, int b)
{

    return (a * b);
}
int main()
{

    int (*ptr)(int, int);
    ptr = &multi;
    int c;
    c = (*ptr)(12, 15);
    cout << "c= " << c << endl;

    return 0;
}