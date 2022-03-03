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
    unique_ptr<Tree> branch= make_unique<Tree>();
}