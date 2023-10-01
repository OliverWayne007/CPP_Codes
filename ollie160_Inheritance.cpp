#include<bits/stdc++.h>

using namespace std;

// Importance of private and protected inheritance

class Array
{
    private:

    int* arr;

    int size;


    protected:

    void setSize(int x)
    {
        size = x;
        arr = new int[this -> size];
    }


    public:

    Array()
    {
        cout << "I am a default constructor of the Array class !!!" << endl;
    }

    Array(int size)
    {
        this -> size = size;
        arr = new int[size];
    }

    int insert(int index , int value)
    {
        if(index < size)
        {
            arr[index] = value;
            return 1;
        }
        else
        {
            cout << "Index out of bound !!!" << endl;
            return -1;
        }
    }
};

class Stack : private Array
{
    private:

    int top;

    public:

    Stack(int n)
    {
        top = 0;
        setSize(n);
    }

    void push(int value)
    {
        int response = insert(top , value);
        if(response == 1)
        {
            top += 1;
        }
    }

    void pop()
    {
        if(top == 0)
        {
            cout << "Stack is empty !!!" << endl;
        }
        else
        {
            top -= 1;
        }
    }
};

int main()
{
    Stack s(10);
    s.push(10);
    // s.insert(5 , 20);   // error: 'int Array::insert(int, int)' is inaccessible within this context
    return 0;
}