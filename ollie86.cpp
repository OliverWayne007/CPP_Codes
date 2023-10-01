#include<iostream>
using namespace std;
// DEMONSTRATIONN OF this-pointer.
class Box
{
    private:
    int l;
    int b;
    int h;
    public:
    void setValue(int l , int b , int h)
    {
        this->l=l;
        this->b=b;
        this->h=h;
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
    return 0;
}