#include<iostream>
using namespace std;
// IMPLEMENT OF STACK USING LINKED LIST !!!
struct Node
{
    int data;
    struct Node* next;
};

struct Stack
{
    struct Node* top;
};

void linkedlisttraversal(struct Node*a)
{
    while(a != NULL)
    {
        cout<<"Element: "<<a->data<<endl;
        a = a->next;
    }
}

bool isEmpty(struct Node* tpr)
{
    if(tpr == NULL)
    {
        return true;
    }

    else
    {
        return false;
    }
}

bool isFull()
{
    struct Node* p = (struct Node*)malloc(sizeof(Node*));
    if(p == NULL)
    {
        return true;
    }

    else
    {
        return false;
    }
}

void push(struct Node** head , int data)
{
    if(isFull()==true)
    {
        cout<<"Stack Overflow !!!"<<endl;
    }

    else
    {
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = data;
        newnode->next = *head;
        *head = newnode;

    }
}

void pop(struct Node** head)
{
    if(isEmpty(*head))
    {
        cout<<"No element in stack !!!"<<endl;
    }

    else
    {
        struct Node* ptr = *head;
        int x = (*head)->data;
        *head = (*head)->next;
        free(ptr);
        cout<<"The popped element is: "<<x<<endl;
    }
}

int main()
{
    struct Stack* s = (struct Stack*)malloc(sizeof(Stack*));
    s->top = (struct Node*)malloc(sizeof(Node*));
    (s->top)->data = 19;
    (s->top)->next = NULL;
    cout<<isEmpty(s->top)<<endl;
    cout<<isFull()<<endl;
    push(&(s->top) , 17);
    push(&(s->top) , 15);
    push(&(s->top) , 13);
    push(&(s->top) , 11);
    cout<<endl;
    linkedlisttraversal(s->top);
    cout<<endl;
    pop(&(s->top));
    cout<<endl;
    linkedlisttraversal(s->top);
    cout<<endl;
    pop(&(s->top));
    cout<<endl;
    linkedlisttraversal(s->top);
    cout<<endl;
    pop(&(s->top));
    cout<<endl;
    linkedlisttraversal(s->top);
    cout<<endl;
    pop(&(s->top));
    cout<<endl;
    linkedlisttraversal(s->top);
    cout<<endl;
    pop(&(s->top));
    cout<<endl;
    linkedlisttraversal(s->top);
    cout<<endl;
    pop(&(s->top));
    cout<<endl;
    return 0;
}