#include<iostream>
using namespace std;
 struct node{
     int data;
     struct node *next;
 };

 void CircularLLT(struct node *head)
 {
     struct node *temp;//= head;
     do
     {
         cout<<"\nElement: "<<temp->data;
         temp=temp->next;
     }while(temp!=head);
 }
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node *)new(struct node);
    second=(struct node *)new(struct node);
    third=(struct node *)new(struct node);
    fourth=(struct node *)new(struct node);

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=head;

    CircularLLT(head);

    return 0;
}