#include <iostream>  
using namespace std;  
template<class T> T mult(T a,T b)  
{  
    T result = a*b;  
    return result;  
      
}  
int main()  
{  
  int i =2;  
  int j =3;  

  float m = 2.3;  
  float n = 1.2;

  cout<<"Multiplication of i and j is :"<<mult(i,j);  
  cout<<'\n';  
  cout<<"Multiplication of m and n is :"<<mult(m,n);  
  
  return 0;  
}  