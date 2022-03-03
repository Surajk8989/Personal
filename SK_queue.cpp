#include <iostream>       
#include <queue>          
#include <string>     
using namespace std;

int main ()
{
  queue<string> myqueue;

  myqueue.emplace ("I love my country");
  myqueue.emplace (", my INDIA");

  cout << "myqueue contains:\n";
  while (!myqueue.empty())
  {
    cout << myqueue.front();
    myqueue.pop();
  }

  return 0;
}