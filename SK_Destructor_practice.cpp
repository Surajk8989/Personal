#include<iostream>
using namespace std;

int count=0;

class thing
{
    public:
    //thing(){}
    thing()
    {
        count++;
        cout<<"You r in constructor and it will increase count to- "<<count<<endl;
    }
    ~thing()
    {
        cout<<"you r in destructor and it will decrease count to- "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"You are in main"<<endl;
    cout<<"Creating first object"<<endl;
    thing T1;

    cout<<"Creating another object"<<endl;
    thing T2, T3;

    cout<<"You are out of the main"<<endl;
     
    return 0;
}