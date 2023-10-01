#include<iostream>
using namespace std;
// INSERTION AT THE BEGINING OF A LINKED LIST YET ANOTHER METHOD !!!
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

struct Node* InsertAtBegining(struct Node* currfirst , int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = currfirst;
    return ptr;
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 13;
    head->next = second;
    second->data = 15;
    second->next = third;
    third->data = 17;
    third->next = fourth;
    fourth->data = 19;
    fourth->next = NULL;

    linkedlisttraversal(head);

    head = InsertAtBegining(head , 11);

    cout<<endl;

    linkedlisttraversal(head);

    return 0;
}