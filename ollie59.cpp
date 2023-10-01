#include<iostream>
using namespace std;
// INSERT A NODE AT THE BEGINING OF A DOUBLY LINKEDD LIST !!!
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

struct Node* InsertAtBegining(struct Node* ptr , int data)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(Node*));
    newnode->data = data;
    newnode->next = ptr;
    ptr->prev = newnode;
    newnode->prev = NULL;
    return newnode;
}



int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(Node*));
    struct Node* second = (struct Node*)malloc(sizeof(Node*));
    struct Node* third = (struct Node*)malloc(sizeof(Node*));
    struct Node* fourth = (struct Node*)malloc(sizeof(Node*));

    // (*head).data = 13;
    head->data = 13;
    // (*head).next = second;
    head->next = second;
    // (*head).prev = NULL;
    head->prev = NULL;
    // (*second).data = 15;
    second->data = 15;
    // (*second).prev = head;
    second->prev = head;
    // (*second).next = third;
    second->next = third;
    // (*third).data = 17;
    third->data = 17;
    // (*third).prev = second;
    third->prev = second;
    // (*third).next = fourth;
    third->next = fourth;
    // (*fourth).data = 19;
    fourth->data = 19;
    // (*fourth).prev = third;
    fourth->prev = third;
    // (*fourth).next = NULL;
    fourth->next = NULL;

     linkedlisttraversal(head);
     cout<<endl;
     reverselisttraversal(fourth);
     cout<<endl;

    //struct Node* newnode = (struct Node*)malloc(sizeof(Node*));
    // (*newnode).data = 11;
    //newnode->data = 11;
    // (*newnode).next = head;
    //newnode->next = head;
    // (*head).prev = newnode;
    //head->prev = newnode;
    //head = newnode;
    // (*newnode).prev = NULL;
    //newnode->prev = NULL;

    head = InsertAtBegining(head , 11);

    linkedlisttraversal(head);
    cout<<endl;
    reverselisttraversal(fourth);
    cout<<endl;


    return 0;
}