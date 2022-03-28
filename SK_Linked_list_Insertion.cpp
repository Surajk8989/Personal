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

// Case 1- Insertion at first    //

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)new (struct node);
    ptr->data = data;

    ptr->next = head;

    return ptr;
}

// Case 2
struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)new (struct node);
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)new (struct node);
    ptr->data = data;
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4
struct node *insertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)new (struct node);
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
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

    cout << "Linked List before insertion: " << endl;
    SinglyTraversal(head);

    // head = insertAtFirst(head, 40);
    // head = insertAtIndex(head, 56, 1);
    // head = insertAtEnd(head, 56);

    head = insertAfterNode(head, second, 45);
    cout << "Linked List after insertion: " << endl;
    SinglyTraversal(head);

    return 0;
}