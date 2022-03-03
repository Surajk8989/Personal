#include <iostream>
using namespace std;

class Interest
{
    int amount;
    int years;
    float ROI;
    float returnvalue;

public:
    Interest() {}
    Interest(int p, int t, float r); // r value float like 0.05
    
    void show();
};
Interest::Interest(int p, int t, float r)
{
    amount = p;
    years = t;
    ROI = r;
    returnvalue= amount;
    for (int i = 0; i < t; i++)
    {
        returnvalue = returnvalue * (1 + ROI);
    }
}
void Interest::show()
{
    cout << endl
         << "principal amount- " << amount << endl;
    cout << "years- " << years << endl;
    cout << "Return amount- " << returnvalue << endl;
}
int main()
{

    // Interest i1;
    int p, t;
    float r;
    cout << "Enter value of p, t and r" << endl;
    cin >> p >> t >> r;

    Interest i1 = Interest(p, t, r);
    i1.show();

    return 0;
}