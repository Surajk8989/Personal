#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;     //   vector of int type of name 'v'
    v.push_back(1);    //   o/p- 1
    v.push_back(2);    //   o/p- 1 2 
    v.push_back(3);    //   o/p- 1 2 3

    for(int i=0; i<v.size();i++)        //   v.size()- to return size of vector
    {
        cout<<v[i]<<endl;
    }
    vector<int>::iterator it;             // created iterator it
    for(it=v.begin();it!=v.end();it++)    //for print from begin to end
    {
        cout<<*it<<endl;
    }
    for(auto element:v)      // auto print element  o/p- 1 2 3 
    {
        cout<<element<<endl;
    }
    
    v.pop_back();             // To delete the last element o/p- 1 2

    vector<int> v2(4, 20);     //Output- 20 20 20 20 

    swap(v,v2);      // swap elements of v to v2 and vice versa

    for(auto element:v)      // o/p- 20 20 20 20
    {cout<<element<<endl; }

    for(auto element:v2)    // o/p- 1 2
    {cout<<element<<endl;} 

    

    return 0;
}