#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cout << "Enter the array size" << endl;
    cin >> n;
    int Array[n];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> Array[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << Array[i] << " ";
    }
    
    cout<<endl;
    int MaxNo = INT_MIN;
    int MinNo = INT_MAX;
    int i;

    for (i = 0; i < n; i++)
    {
        MaxNo = max(MaxNo, Array[i]);
        MinNo = min(MinNo, Array[i]);
    }

    cout << "Max No. is= " << MaxNo << endl;
    cout << "Min No. is= " << MinNo << endl;

    return 0;
}