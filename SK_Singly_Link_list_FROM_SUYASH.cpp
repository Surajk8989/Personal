#include <iostream>
#include <stdlib.h>
using namespace std;

template <class T>
struct node
{
    node<T> *next;
    T data;
};

template <class T>
class SinglyLL
{
private:
    node<T> *first;
    int size;

public:
    SinglyLL();

    void InsertFirst(T);

    void Display();
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    first = NULL;
    size = 0;
}

template <class T>
void SinglyLL<T>::InsertFirst(T Data)
{
    node<T> *newn = new node<T>;

    newn->data = Data;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    size++;
}

template <class T>
void SinglyLL<T>::Display()
{
    node<T> *temp = first;

    while (temp != NULL)
    {
        cout << (temp->data) << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    SinglyLL<int> L;

    L.InsertFirst(10);
    L.InsertFirst(10);
    L.InsertFirst(10);
    L.InsertFirst(10);

    L.Display();

    return 0;
}