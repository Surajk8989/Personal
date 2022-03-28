#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void SinglyTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)new (struct node);
    second = (struct node *)new (struct node);
    third = (struct node *)new (struct node);

    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 300;
    third->next = NULL;

    SinglyTraversal(head);

    return 0;
}