#include<iostream>
using namespace std;
// INSERT A NODE AFTER A GIVEN NODE SOMEWHERE IN BETWEEN FIRST NODE AND LAST NODE. 
struct ShitNode
{
    int data;
    struct ShitNode* next;
};

void putval(struct ShitNode* fuck , int val)
{
    fuck->data = val;
}

void printlist(struct ShitNode* piss)
{
    while(piss!=NULL)
    {
       cout<<piss->data<<" ";
       piss = piss->next;
    }

    cout<<endl;
}

void insertINbtw(struct ShitNode* prevNode , int new_data )
{
    struct ShitNode* new_node = (struct ShitNode*)malloc(sizeof(struct ShitNode));
    new_node->data = new_data;
    new_node->next = prevNode->next;
    prevNode->next = new_node;
}

int main()
{
    struct ShitNode* head = (struct ShitNode*)malloc(sizeof(struct ShitNode));
    struct ShitNode* second = (struct ShitNode*)malloc(sizeof(struct ShitNode));
    struct ShitNode* third = (struct ShitNode*)malloc(sizeof(struct ShitNode));
    struct ShitNode* fourth = (struct ShitNode*)malloc(sizeof(struct ShitNode));

    putval(head , 11);
    putval(second , 12);
    putval(third , 13);
    putval(fourth , 14);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    printlist(head);

    insertINbtw(second , 15);

    printlist(head);

    return 0;
}

