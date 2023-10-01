#include<iostream>
using namespace std;
// TO INSERT A NODE AT THE END OF A LINKED LIST.
struct ShitNode
{
    int data;
    struct ShitNode* next;
};

void printlist(struct ShitNode* dick )
{
    while(dick!=NULL)
    {
        cout<<dick->data<<" ";
        dick = dick->next;
    }

    cout<<endl;
}

void insertATlast(struct ShitNode* prevLast , int new_data)
{
    struct ShitNode* new_node = (struct ShitNode*)malloc(sizeof(struct ShitNode));
    new_node->data = new_data;
    new_node->next = NULL;
    prevLast->next = new_node;
}

int main()
{
    struct ShitNode* head = (struct ShitNode*)malloc(sizeof(struct ShitNode));
    struct ShitNode* second = (struct ShitNode*)malloc(sizeof(struct ShitNode));
    struct ShitNode* third = (struct ShitNode*)malloc(sizeof(struct ShitNode));

    head->data = 11;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 13;
    third->next = NULL;

    printlist(head);

    insertATlast(third , 14);

    printlist(head);
    
    return 0;
}