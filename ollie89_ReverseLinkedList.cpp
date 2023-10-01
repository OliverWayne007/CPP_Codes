#include<iostream>
using namespace std;
// REVERSING A LINKED LIST BY RECURSIVE METHOD !!!
struct Node
{
    int data;
    struct Node* next;
};

struct Node* traveltolast(struct Node* tpr)
{
    while(tpr->next != NULL)
    {
        tpr = tpr->next;
    }

    return tpr;
}

void Printlist(struct Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

void ReverseList(struct Node* head)
{
    struct Node* ptr = head;

    while((head->next)->next != NULL)
    {
        head = head->next;
    }

    (head->next)->next = head;

    head->next = NULL;

    if(ptr->next == NULL)
    {
        return;
    }

    else
    {
        ReverseList(ptr);
    }
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 11;
    head->next = second;
    second->data = 13;
    second->next = third;
    third->data = 17;
    third->next = NULL;

    Printlist(head);

    cout<<endl;

    struct Node* OriginalLastNode = traveltolast(head);

    ReverseList(head);

    head = OriginalLastNode;

    Printlist(head);

    cout<<endl;

    return 0;
}