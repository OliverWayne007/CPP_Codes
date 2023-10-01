#include<iostream>
using namespace std;
// DEMONSTRATION OF OBJECT-POINTER.
class Box
{
    private:
    int l;
    int b;
    int h;
    public:
    void setValue(int x , int y , int z)
    {
        l=x;
        b=y;
        h=z;
    }
    void showData()
    {
        cout<<"The length of the box is: "<<l<<endl;
        cout<<"The breadth of the box is: "<<b<<endl;
        cout<<"The hieght of the box is: "<<h<<endl;
    }
    void CalculateVolume()
    {
        int volume = (l*b*h);
        cout<<"The volume of the box is: "<<volume<<endl;
    }
};

int main()
{
    Box box1;
    box1.setValue(2,3,5);
    box1.showData();
    box1.CalculateVolume();
    cout<<endl;
    Box box2;
    Box* p;
    p = &box2;
    (*p).setValue(12,10,5);
    (*p).showData();
    (*p).CalculateVolume();
    cout<<endl;
    Box box3;
    Box* ptr;
    ptr = &box3;
    ptr->setValue(10,20,30);
    ptr->showData();
    ptr->CalculateVolume();
    return 0;
}