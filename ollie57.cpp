#include<iostream>
using namespace std;
// INSERTION OF A NODE IN BETWEEN A DOUBLY LINKED LIST !!!
struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};

void linkedlisttraversal(struct Node* a)
{
    while(a != NULL)
    {
        cout<<"Element: "<<a->data<<endl;
        a = a->next;
    }
}

void reverselisttraversal(struct Node* b)
{
    while(b != NULL)
    {
        cout<<"Element: "<<b->data<<endl;
        b = b->prev;
    }
}

void InsertInBetween(struct Node* head , int data , int index)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    int i = 1;
    while(i != index-1)
    {
        head = head->next;
        i++;
    }

    newnode->prev = head;
    newnode->next = head->next;
    (head->next)->prev = newnode;
    head->next = newnode;

}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 11;
    head->prev = NULL;
    head->next = second;
    second->data = 13;
    second->prev = head;
    second->next = third;
    third->data = 15;
    third->prev = second;
    third->next = fourth;
    fourth->data = 19;
    fourth->prev = third;
    fourth->next = NULL;

    linkedlisttraversal(head);

    cout<<endl;

    reverselisttraversal(fourth);

    InsertInBetween(head , 17 , 4);

    cout<<endl;

    linkedlisttraversal(head);

    cout<<endl;

    reverselisttraversal(fourth);

    return 0;
}