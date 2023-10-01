#include<iostream>
using namespace std;
// LINKED LIST FORMATION AND TRAVERSAL AND INSERTION AT THE BEGINING.
struct ShitNode
{
    int data;
    struct ShitNode* next;
};

void printlist(struct ShitNode* n)
{
    while(n!= NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }

    cout<<endl;
}

// void insertINbegn(struct ShitNode** fuck , int new_data)
// {
//     // struct ShitNode* new_node = NULL;
//     // new_node = (struct ShitNode*)malloc(sizeof(struct ShitNode));
//     new_node->data = new_data;
//     new_node->next = *fuck;
//     *fuck = new_node;
// }

int main()
{
   struct ShitNode* head = NULL;
   struct ShitNode* second = NULL;
   struct ShitNode* third = NULL;
   struct ShitNode* fourth = NULL;
   struct ShitNode* fifth = NULL;

   head = (struct ShitNode*)malloc(sizeof(struct ShitNode));
   second = (struct ShitNode*)malloc(sizeof(struct ShitNode));
   third = (struct ShitNode*)malloc(sizeof(struct ShitNode));
   fourth = (struct ShitNode*)malloc(sizeof(struct ShitNode));
   fifth = (struct ShitNode*)malloc(sizeof(struct ShitNode));

   head->data = 2;
   head->next = second;

   second->data = 3;
   second->next = third;

   third->data = 4;
   third->next = fourth;

   fourth->data = 5;
   fourth->next = fifth;

   fifth->data = 6;
   fifth->next = NULL;

    printlist(head);

   //struct ShitNode** head_ref = &head;
    struct ShitNode* new_node = (struct ShitNode*)malloc(sizeof(struct ShitNode));
    new_node->data = 1;
    new_node->next = head;
    head = new_node;

    //insertINbegn(head_ref,1);


    printlist(head);
    printlist(new_node);

    return 0;

}