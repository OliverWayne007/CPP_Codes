#include<iostream>
using namespace std;
// IMPLEMENTATION OF QUEUE USING ARRAYS !!!
struct Queue
{
    int size;
    int f;
    int b;
    int *arr;
};

bool isEmpty(struct Queue* p)
{
    if(p->f == p->b)
    {
        return true;
    }

    else
    {
        return false;
    }
}

bool isFull(struct Queue* tpr)
{
    if(tpr->b == ((tpr->size)-1))
    {
        return true;
    }

    else
    {
        return false;
    }
}

void push(struct Queue* a , int data)
{
    if(isFull(a) == true)
    {
        cout<<"Queue OverFlow !!!"<<endl;
    }

    else
    {
        (a->b)++;
        (a->arr)[a->b] = data;
    }
}

void pop(struct Queue* c)
{
    if(isEmpty(c) == true)
    {
        cout<<"No element in queue !!!"<<endl;
    }

    else
    {
        (c->f)++;
        int val = (c->arr)[c->f];
        cout<<(c->arr)[c->f]<<endl;

    }
}

void queuetraversal(struct Queue* d)
{
    for(int i = (d->f)+1 ; i<=(d->b) ; i++)
    {
        cout<<(d->arr)[i]<<endl;
    }
}

int main()
{
    struct Queue q;
    q.f = -1;
    q.b = -1;
    q.size = 100;
    q.arr = (int*)malloc((q.size)*sizeof(int));
    struct Queue* ptr = &q;
    queuetraversal(&q);
    cout<<endl;
    pop(&q);
    push(&q , 11);
    push(&q , 13);
    push(&q , 15);
    push(&q , 17);
    push(&q , 19);
    queuetraversal(&q);
    cout<<endl;
    pop(&q);
    cout<<endl;
    queuetraversal(&q);
    cout<<endl;
    pop(&q);
    cout<<endl;
    queuetraversal(&q);
    cout<<endl;
    pop(&q);
    cout<<endl;
    queuetraversal(&q);
    cout<<endl;
    pop(&q);
    cout<<endl;
    queuetraversal(&q);
    cout<<endl;
    pop(&q);
    cout<<endl;
    queuetraversal(&q);
    cout<<endl;
    pop(&q);
    cout<<endl;
    return 0;
}