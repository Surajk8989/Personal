#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int counter = 1;
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    cout << "\nSorted array will be: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}