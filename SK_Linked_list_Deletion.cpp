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

struct node *deletionFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    delete (ptr);
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)new (struct node);
    second = (struct node *)new (struct node);
    third = (struct node *)new (struct node);
    fourth = (struct node *)new (struct node);

    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 300;
    third->next = fourth;

    fourth->data = 400;
    fourth->next = NULL;

    cout << "Linked list before deletion: \n";
    SinglyTraversal(head);

    head = deletionFirst(head);
    cout << "Linked list after deletion: \n";
    SinglyTraversal(head);

    return 0;
}