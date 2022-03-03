#include<iostream>
#include<string>
#include<memory>
using namespace std;

class Tree
{
     public:
    Tree()
    {
        cout<<"You are on tree"<<endl;
    }
    ~Tree()
    {
        cout<<"You are not on the tree"<<endl;
    }
};
int main()
{
    weak_ptr<Tree> branch;                               //To copy one shared pointer to another
    {
         shared_ptr<Tree> tweak= make_shared<Tree>();    
         branch= tweak;                                 
    }
}