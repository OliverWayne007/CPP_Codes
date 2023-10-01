#include<iostream>
using namespace std;
// IMPLEMENTATION OF QUEUE USING LINKED LIST !!!
struct Node
{
    int data;
    struct Node* next;
};

bool isEmpty(struct Node* first , struct Node* last)
{
    if(first==NULL && last==NULL)
    {
        //cout<<"The queue is empty !!!"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}

// bool isFull()
// {
//     struct Node* newnode = (struct Node*)malloc(sizeof(Node*));
//     if(newnode==NULL)
//     {
//         //cout<<"Queue Overflow !!!"<<endl;
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

void push(struct Node** f , struct Node** r , int data)
{
    // if(isFull()==true)
    // {
    //     cout<<"Queue is full !!!"<<endl;
    // }
    struct Node* newNode = (struct Node*)malloc(sizeof(Node*));
    if(newNode==NULL)
    {
        cout<<"Queue is full !!!"<<endl;
    }
    else
    {
        //struct Node* newNode = (struct Node*)malloc(sizeof(Node*));
        newNode->data = data;
        newNode->next = NULL;
        if(*f == NULL)
        {
            *f = *r = newNode;
        }
        else
        {
            (*r)->next = newNode;
            (*r) = newNode;
        }
    }
}

void pop(struct Node** first , struct Node** last)
{
    if(isEmpty(*first , *last)==true)
    {
        cout<<"Queue is empty !!!"<<endl;
    }
    else
    {
        struct Node* ptr = (*first);
        int val = (*first)->data;
        if((*first)->next == NULL)
        {
            (*last) = (*last)->next;
        }
        (*first) = (*first)->next;
        free(ptr);
        cout<<val<<endl;

    }
}

void linkedlisttraversal(struct Node* first)
{
    while(first != NULL)
    {
        cout<<first->data<<endl;
        first = first->next;
    }
}

int main()
{
    struct Node* first = NULL;
    struct Node* last = NULL;
    cout<<"Printing the elements of the queue: "<<endl;
    if(isEmpty(first , last)==true)
    {
        cout<<"Queue is empty !!!"<<endl;
    }
    else
    {
        linkedlisttraversal(first);
    }
    push(&first , &last , 11);
    cout<<"Printing the elements of the queue: "<<endl;
    if(isEmpty(first , last)==true)
    {
        cout<<"Queue is empty !!!"<<endl;
    }
    else
    {
        linkedlisttraversal(first);
    }
    push(&first , &last , 13);
    push(&first , &last , 15);
    push(&first , &last , 17);
    push(&first , &last , 19);
    cout<<"Printing the elements of the queue: "<<endl;
    if(isEmpty(first , last)==true)
    {
        cout<<"Queue is empty !!!"<<endl;
    }
    else
    {
        linkedlisttraversal(first);
    }
    cout<<"The popped element is: "<<endl;
    pop(&first , &last);
    cout<<"Printing the elements of the queue: "<<endl;
    if(isEmpty(first , last)==true)
    {
        cout<<"Queue is empty !!!"<<endl;
    }
    else
    {
        linkedlisttraversal(first);
    }
    cout<<"The popped element is: "<<endl;
    pop(&first , &last);
    cout<<"The popped element is: "<<endl;
    pop(&first , &last);
    cout<<"Printing the elements of the queue: "<<endl;
    if(isEmpty(first , last)==true)
    {
        cout<<"Queue is empty !!!"<<endl;
    }
    else
    {
        linkedlisttraversal(first);
    }
    cout<<"The popped element is: "<<endl;
    pop(&first , &last);
    cout<<"The popped element is: "<<endl;
    pop(&first , &last);
    cout<<"Printing the elements of the queue: "<<endl;
    if(isEmpty(first , last)==true)
    {
        cout<<"Queue is empty !!!"<<endl;
    }
    else
    {
        linkedlisttraversal(first);
    }
    cout<<"The popped element is: "<<endl;
    pop(&first , &last);

    return 0;
}
