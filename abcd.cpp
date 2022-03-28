#include <iostream>
#include <string>
using namespace std;
int main()
{
    int var1;

    string Team;
    cout << "Value of var1 :";
    cin >> var1;

    cout << "Enter your team name :";
    getline(cin,Team);

    cout << var1 << endl<< Team;
}
