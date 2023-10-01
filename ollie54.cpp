#include<iostream>
using namespace std;
// DELETION OF A NODE IN BETWEEN THE LINKED LIST.
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

void DeleteNode(struct Node* prevnode , struct Node* node)
{
    prevnode->next = node->next;
    free(node);
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 11;
    // (*head).data = 11;
    head->next = second;
    // (*head).next = second;
    second->data = 13;
    // (*second).data = 13;
    second->next = third;
    // (*second).next = third;
    third->data = 17;
    // (*third).data = 17;
    third->next = fourth;
    // (*third).next = fourth;
    fourth->data = 19;
    // (*fourth).data = 19;
    fourth->next = NULL;
    // (*fourth).next = NULL;

    linkedlisttraversal(head);

    DeleteNode(second , third);

    cout<<endl;

    linkedlisttraversal(head);

    return 0;
}