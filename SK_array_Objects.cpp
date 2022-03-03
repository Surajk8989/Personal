#include<iostream>
using namespace std;

class BOOK
{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Id of this Book is "<< id<<endl;
            cout<<"Price of this Book is "<<price<<endl;
        }
};
int main(){
    int size = 3;
    BOOK *ptr = new BOOK [size];
    BOOK *Bptr = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of Book "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++; 
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Serial number: "<<i+1<<endl;
        Bptr->getData();
        Bptr++;
    }
}