#include <iostream>
using namespace std;

int Linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter no. of elements: ";
    cin >> n;

    int arr[n];
    cout << "enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "key=  ";
    cin >> key;

    cout << Linearsearch(arr, n, key) << endl;

    return 0;
}