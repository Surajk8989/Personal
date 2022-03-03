#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    
    map<string, int>  ageMap;
    
    ageMap["Suraj"] = 27;
    ageMap["Soham"] = 26;
    ageMap["Vikas"] = 20;
    ageMap["Amol"] = 19;
    ageMap["Sachin"] = 42;
    
    ageMap.insert( { {"Ranvir", 16}, {"Akash", 50} } );
 
    map<string,int> :: iterator iter;
    for (iter = ageMap.begin(); iter != ageMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
 
    return 0;
}