#include<iostream>
using namespace std;

int main(){
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
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;

    }
    cout << "\nSorted array will be: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}