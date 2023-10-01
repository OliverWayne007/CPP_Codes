#include<iostream>
using namespace std;
// IMPLEMENTATION OF STACK USING ARRAYS WITH STRUCTURES !!!
struct Stack
{
    int top;
    int size;
    int* arr;
};

bool isEmpty(struct Stack* a)
{
    if(a->top > -1)
    {
        return false;
    }

    else
    {
        return true;
    }
}

bool isFull(struct Stack* b)
{
    if(b->top == (b->size-1))
    {
       return true;
    }

    else
    {
        return false;
    }
}

void push(struct Stack* ptr , int x)
{
    if(isFull(ptr)==true)
    {
        cout<<"Stack Overflow !!!"<<endl;
    }

    else
    {
        (ptr->top)++;
        (ptr->arr)[ptr->top] = x;
    }
}

void pop(struct Stack* p)
{
    if(isEmpty(p)==true)
    {
        cout<<"No element in stack !!!"<<endl;
    }

    else
    {
        int val = (p->arr)[p->top];
        (p->top)--;
        cout<< val<<endl;
    }
}

int main()
{
    struct Stack* s = (struct Stack*)malloc(sizeof(Stack*));
    s->top = -1;
    s->size = 6;
    s->arr = (int*)malloc((s->size)*sizeof(int));

    cout<<isEmpty(s)<<endl;
    cout<<isFull(s)<<endl;

    push(s , 11);
    push(s , 13);
    push(s , 15);
    push(s , 17);
    push(s , 19);

    cout<<isEmpty(s)<<endl;
    cout<<isFull(s)<<endl;

    push(s , 21);
    push(s , 23);
    pop(s);
    push(s , 23);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);

    return 0;
}