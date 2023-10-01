#include<iostream>
using namespace std;

template<typename T>
class Array
{
    private:
    int size;
    T* ptr;
    public:
    void print();
    Array(T arr[] , int s);
};

template<typename T>
Array<T>::Array(T arr[] , int s)
{
    ptr = new T[s];
    size = s;
    for(int i = 0 ; i<s ; i++)
    {
        ptr[i] = arr[i];
    }
}

template<typename T>
void Array<T>::print()
{
    for(int i = 0 ; i<size ; i++)
    {
        cout<<*(ptr+i)<<" ";
    }
}

int main()
{
    // int a = 10;
    // int* ptr = &a;
    // cout<<ptr<<endl;
    // cout<<*(ptr)<<endl;
    // cout<<ptr[0]<<endl;
    // cout<<ptr[1]<<endl;
    // cout<<*(ptr+1)<<endl;
    // cout<<(ptr+1)<<endl;

    int arr[5] = {1,2,3,4,5};
    Array<int>a(arr , 5);
    a.print();
    return 0;
}