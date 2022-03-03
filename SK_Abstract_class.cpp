#include<iostream>
#include<conio.h>
using namespace std;

class Cricket
{
    protected: 
     string name;
     int Jursey;
     public:
     Cricket(string n, int j)
     {
         name=n;
         Jursey=j;
     }
     virtual void display()=0;
};
class Player: public Cricket
{
    protected:
     string sub;
     public:
     Player(string n, int j, string s):Cricket(n,j)
     {
         sub=s;
     }
     void display()
     {
         cout<<"Name of the player-  "<<name<<endl;
         cout<<"Jursey No. of the player-  "<<Jursey<<endl;
         cout<<"Whether he is substitute-  "<<sub<<endl;
     }

};
int main()
{
    string name;
    string sub;
    int Jursey;

    //To show player information
    name="Yuvraj singh";
    Jursey=12;
    sub="No";
    
    Player obj(name, Jursey, sub);
    Cricket* bat;
    bat= &obj;
    bat->display();
    return 0;

}
