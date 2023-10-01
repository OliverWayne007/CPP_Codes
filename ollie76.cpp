#include<iostream>
using namespace std;
// Computer Programming Assignment-2 Question-2.
class Date
{
    private:

    int dd;
    int mm;
    int yy;

    public:

    Date()
    {
        dd=0;
        mm=0;
        yy=0;
    }

    Date(int d , int m , int y)
    {
        dd = d;
        mm = m;
        yy = y;
    }

    void show()
    {
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }

    void operator ++ (int)
    {
        dd++;
        if(dd>30)
        {
            dd = 1;
            mm++;
        }

        if(mm>12)
        {
            mm = 1;
            yy++;
        }
    }

    void operator -- (int)
    {
        dd--;
        if(dd<1)
        {
            dd = 30;
            mm--;
        }

        if(mm<1)
        {
            mm = 1;
            yy--;
        }
    }

};

int main()
{
    Date date1(1 , 1 , 2021);
    date1.show();
    date1++;
    date1.show();
    Date date2(6 , 8 , 2001);
    date2.show();
    date2--;
    date2.show();
    return 0;
}