#include<iostream>
using namespace std;
// INSERT AT THE END OF A LINKED LIST REVISITED.
struct Node
{
    int data;
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

void InsertAtEnd(struct Node* currlast , struct Node* newlast)
{
    currlast->next = newlast;
    newlast->next = NULL;
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 11;
    head->next = second;
    second->data = 13;
    second->next = third;
    third->data = 15;
    third->next = fourth;
    fourth->data = 17;
    fourth->next = NULL;

    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = 19;
    InsertAtEnd(fourth , ptr);

    linkedlisttraversal(head);

    return 0;
}