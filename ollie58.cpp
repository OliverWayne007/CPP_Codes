#include<iostream>
using namespace std;
// INSERTION OF A NODE AT THE END OF A DOUBLY LINKED LIST !!!
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
        cout<<a->data<<endl;
        a = a->next;
    }
}

void reverselisttraversal(struct Node* b)
{
    while(b != NULL)
    {
        cout<<b->data<<endl;
        b = b->prev;
    }
}

void InsertAtEnd(struct Node* head , int data , int NumofNodes)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    int i = 1;
    while(i != NumofNodes)
    {
        head = head->next;
        i++;
    }

    newnode->prev = head;
    head->next = newnode;
    newnode->next = NULL;
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
    fourth->data = 17;
    fourth->prev = third;
    fourth->next = NULL;

    linkedlisttraversal(head);

    cout<<endl;

    reverselisttraversal(fourth);

    InsertAtEnd(head , 19 , 4);

    cout<<endl;

    linkedlisttraversal(head);

    return 0;

}