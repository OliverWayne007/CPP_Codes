#include<iostream>
using namespace std;
// DOUBLY LINKED LIST TRAVERSAL !!!
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
    third->data = 17;
    third->prev = second;
    third->next = fourth;
    fourth->data = 19;
    fourth->prev = third;
    fourth->next = NULL;

    linkedlisttraversal(head);

    cout<<endl;

    reverselisttraversal(fourth);

    return 0;

}