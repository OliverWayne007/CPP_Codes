#include<iostream>
using namespace std;
// CLASS TEMPLATES IN C++ !!!
template<class T , class T1>
class MyClass
{
    public:

    T size;
    T1* arr;

    MyClass(T val)
    {
       size = val;
       arr = new T1[size];
    }

    void setdata()
    {
        cout<<"Enter data:"<<endl;
        for(int i = 0 ; i<size ; i++)
        {
            cin>>arr[i];
        }
        //cout<<endl;
    }

    void displaydata()
    {
        for(int i = 0 ; i<size ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void sum()
    {
        T1 add = 0.0;
        for(int i = 0 ; i<size ; i++)
        {
            add = add + arr[i];
        }
        cout<<add<<endl;
    }

};

int main()
{
    MyClass<int , float> myobj(3);
    myobj.setdata();
    myobj.displaydata();
    myobj.sum();
    return 0;
}