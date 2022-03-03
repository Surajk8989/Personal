#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    public:  
   /* T num1 = 5; */  T num1=21.6;
   /* T num2 = 6; */  T num2=11.3;

    void add()  
    {  
        cout << "Addition of num1 and num2 : " << num1+num2<<endl;  
    }  
      
};  
  
int main()  
{  
    A<float> d;    //chnage the data type as per your requirement
    d.add();  
    return 0;  
}  