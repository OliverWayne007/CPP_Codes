#include<iostream>
using namespace std;
// INSERT IN BETWEEN OF A LINKED LIST REVISITED.
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

void InsertInBetween(struct Node* prevNode , struct Node* newNode)
{
    struct Node* temp;
    temp = prevNode->next;
    prevNode->next = newNode;
    newNode->next = temp;
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

   head->data = 11;
   head->next = second;
   second->data = 13;
   second->next = third;
   third->data = 15;
   third->next = fourth;
   fourth->data = 19;
   fourth->next = NULL;

   struct Node* ptr;
   ptr = (struct Node*)malloc(sizeof(struct Node));
   ptr->data = 17;

   InsertInBetween(third , ptr);

   linkedlisttraversal(head);

   return 0;
}