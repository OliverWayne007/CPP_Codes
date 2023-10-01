#include<iostream>
using namespace std;
// INSERT AT BEGINING OF A LINKED LIST REVISITED.
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

void InsertAtBegining(struct Node** currhead , struct Node* newNode)
{
    newNode->next = *currhead;
    *currhead = newNode;
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

    head->data = 13;
    // (*head).data = 11;
    head->next = second;
    // (*head).next = second;
    second->data = 15;
    // (*second).data = 13;
    second->next = third;
    // (*second).next = third;
    third->data = 17;
    // (*third).data = 15;
    third->next = fourth;
    // (*third).next = fourth;
    fourth->data = 19;
    // (*fourth).data = 19;
    fourth->next = NULL;
    // (*fourth).next = NULL;

    struct Node* ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = 11;
    // (*ptr).data = 11;
    InsertAtBegining(&head , ptr);

    // ptr->next = head;
    // head = ptr;

    linkedlisttraversal(head);

    return 0;


}