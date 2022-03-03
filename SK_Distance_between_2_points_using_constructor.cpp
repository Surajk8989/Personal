#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "Point is (" << x << ", " << y << ")" << endl;
    }
    friend void Sqr(point, point);
};
void Sqr(point p, point q)
{

    float ans;
    ans = sqrt((q.x - p.x) * (q.x - p.x) + (q.y - p.y) * (q.y - p.y));
    cout << "Distance between given points is= " << ans << endl;
}
int main()
{
    point p1(1, 1);
    p1.display();

    point q1(4, 5);
    q1.display();

    Sqr(p1, q1);
    return 0;
}