#include<iostream>
using namespace std;
// LINKED LIST CREATION AND TRAVERSAL REVISITED.
struct Node
{
    int data;
    struct Node* next;
};

void linkedlisttraversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
       //cout<<"Element: "<<(*ptr).data<<endl;
       cout<<"Element: "<<ptr->data<<endl;
       //ptr = (*ptr).next;
       ptr = ptr->next;
    }
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
    
    //(*head).data = 13;
    head->data = 13;
    //(*head).next = second;
    head->next = second;
    //(*second).data = 17;
    second->data = 17;
    //(*second).next = third;
    second->next = third;
    //(*third).data = 19;
    third->data = 19;
    //(*third).next = NULL;
    third->next = fourth;
    //(*fourth).data = 23;
    fourth->data = 23;
    //(*fourth).next = NULL;
    fourth->next = NULL;

    linkedlisttraversal(head);

    return 0;
}