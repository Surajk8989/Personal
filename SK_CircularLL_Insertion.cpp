#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

void CircularLLT(struct node *head)
{
    struct node *temp = head;
    do
    {
        cout << "\nElement: " << temp->data;
        temp = temp->next;
    } while (temp != head);
}

struct node * insertAtFirst(struct node *head, int data)
{
    struct node * ptr = (struct node *) new(struct node);
    ptr->data = data;
 
    struct node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}
int main()
{
    struct node *second;
    struct node *third;  
    struct node *head;
    struct node *fourth;

    head = (struct node *)new (struct node);
    second = (struct node *)new (struct node);
    third = (struct node *)new (struct node);
    fourth = (struct node *)new (struct node);

    head->data = 10;
    head->next = second;

    second->data = 205;
    second->next = third;

    third->data = 201;
    third->next = fourth;

    fourth->data = 25;
    fourth->next = head;

    
    cout<<"Circular Linked list before insertion\n";
    CircularLLT(head);
    head = insertAtFirst(head, 54);
   // head = insertAtFirst(head, 58);
   // head = insertAtFirst(head, 59);
    cout<<"\n\nCircular Linked list after insertion\n";
    CircularLLT(head);

    return 0;
}