#include <iostream>
using namespace std;
class demo
{

public:
    int a;

private:
    int b;

protected:
    int c;

public:
    demo(int i, int j, int k)
    {
        cout << "You are in Constructor." << endl;
        this->a = i;
        this->b = j;
        this->c = k;
    }
    void fun()
    {
        cout << "Value of a is: " << this->a << endl;
        cout << "Value of b is: " << this->b << endl;
        cout << "Value of c is: " << this->c << endl;
    }
};

int main()
{
    demo *p = new demo(10, 20, 30);

    cout << "You are in main." << endl;
    
    cout << "value of a- " << p->a << endl;
    //cout << "value of b- " << p->b << endl;
    //cout << "value of c- " << p->c << endl;
    
    p->fun();
    delete p;

    return 0;
}