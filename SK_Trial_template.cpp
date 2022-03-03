//Enter "usingtemplate" word to write the code snippet

#include<iostream>
using namespace std;

int main(){
     int Arr[4];
     //Arr.setLogicalLength(4);
    for (int i = 0; i < 4; i++) {
     //Arr[i]=(i / 2);
     Arr[i]=(i%2);
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<Arr[i]<<endl;
    }
    
    return 0;
}