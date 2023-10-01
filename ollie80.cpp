# include<iostream>
using namespace std;
// IMPLEMENTATION OF STACK USING ARRAYS REVISITED AGAIN !!!
struct Stack
{
    int size;
    int top;
    int* arr;
};

void push(int* p , int size , int& top , int val)
{
    if(top != size-1)
    {
        top++;
        p[top] = val;
    }
    
    else
    {
        cout<<"Stack Overflow !!!"<<endl;
    }
    
}

void pop(int* p , int& top)
{
    if(top == -1)
    {
        cout<<"Stack is empty !!!"<<endl;
    }
    
    else
    {
        cout<<"The element popped from the stack is: "<<p[top]<<endl;
        top--;
    }
}

void printstack(int* p , int& top)
{
    if(top == -1)
    {
        cout<<"Stack is empty !!!"<<endl;
        return;
    }
    
    else
    {
        cout<<"The elements in the stack are: "<<endl;
        for(int i = top ; i>=0 ; i--)
        {
            cout<<p[i]<<" ";
        }
    }
    
    cout<<endl;
}

int main()
{
    struct Stack s;
    s.size = 10;
    s.top = -1;
    s.arr = (int*)malloc((s.size)*sizeof(int));
    push(s.arr , s.size , s.top , 11);
    printstack(s.arr , s.top);
    push(s.arr , s.size , s.top , 13);
    printstack(s.arr , s.top);
    push(s.arr , s.size , s.top , 15);
    push(s.arr , s.size , s.top , 17);
    push(s.arr , s.size , s.top , 19);
    printstack(s.arr , s.top);
    pop(s.arr , s.top);
    printstack(s.arr , s.top);
    pop(s.arr , s.top);
    pop(s.arr , s.top);
    printstack(s.arr , s.top);
    pop(s.arr , s.top);
    pop(s.arr , s.top);
    printstack(s.arr , s.top);
    pop(s.arr , s.top);
    return 0;
}