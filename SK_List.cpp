#include<iostream>
#include<list>
 using namespace std;

 void display(list<int> &LST)
 {
     list<int>:: iterator it;
     for(it= LST.begin();it!= LST.end();it++)
     {cout<<*it<<" ";}             //for dereferencing the iterator
     
 
 
 }
 int main()
 {
     list<int> list1;
     list1.push_back(6);
     list1.push_back(9);
     list1.push_back(4);
     list1.push_back(8);
     list1.push_back(1);
     
     list1.pop_back();
     display(list1);

     list<int> list2(4);
     list<int>::iterator it= list2.begin();     
     *it=10;
     it++;
     *it= 0;
     it++;
     *it=21;
     it++;
     *it=36;
     cout<<endl;

     list2.pop_front();
     display(list2);

 }

 
    