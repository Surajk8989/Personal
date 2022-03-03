#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int>class1, class2;
    class1["Aisha"]= 100;
    class1["Dipti"]= 102;

    class2["Soumya"]= 50;
    class2["Minal"]= 60;
    class2["Mehar"]= 80;
    class2["Revaa"]= 75;

    class1.swap(class2);

    cout<<"class1 contains:  "<<endl;
    for (map<string,int>::iterator it=class1.begin(); it!=class1.end(); ++it)
    cout << it->first << " - " << it->second << '\n'; 

    cout<<"\n";
    cout<<"class2 contains:  "<<endl;
    for (map<string,int>::iterator it=class2.begin(); it!=class2.end(); ++it)
    cout << it->first << " - " << it->second << '\n';

    return 0;
}