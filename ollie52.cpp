#include<iostream>
using namespace std;
// DELETION OF THE LAST NODE OF THE LINKED LIST.
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

void DeleteLastNode(struct Node* prevlast , struct Node* currlast)
{
    //struct Node* ptr = prevlast->next;
    prevlast->next = NULL;
    free(currlast);
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 11;
    head->next = second;
    second->data = 13;
    second->next = third;
    third->data = 17;
    third->next = fourth;
    fourth->data = 19;
    fourth->next = NULL;

    linkedlisttraversal(head);

    DeleteLastNode(third , fourth);

    cout<<endl;

    linkedlisttraversal(head);

    return 0;
}