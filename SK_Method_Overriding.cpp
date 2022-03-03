#include <iostream>
using namespace std;
class Base 
{
public:
   void disp()
   {
      cout<<"Function of Parent Class";
   }
};
class Derived: public Base{
public:
   void disp() 
   {
      cout<<"Function of Child Class";
   }
};
int main() 
{
   Derived obj; 
   obj.disp();
   return 0;
}