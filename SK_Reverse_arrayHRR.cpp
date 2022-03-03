#include <iostream>
#define MAX 10000
using namespace std;


    int main() 
{
     
    int a[MAX], N,i;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>a[i];
    }
    for(i=N;i>=1;i--)
    {
        cout<<a[i]<<" ";
    } 
    return 0;
}