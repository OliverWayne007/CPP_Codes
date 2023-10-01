#include<iostream>
using namespace std;
// TO FIND THE LARGEST DIGIT IN A GIVEN NUMBER USING FUNCTION !!!
int maxdigitfunc(int num , int maxdigit)
{
    int rem = num%10;
    int quo = num/10;
    
    if(rem>maxdigit)
    {
        maxdigit = rem;
    }
    
    if(quo == 0)
    {
        return maxdigit;
    }
    else
    {
        maxdigitfunc(quo , maxdigit);
    }
    
}

int main()
{
    int num;
    cout<<"Enter the value of num: ";
    cin>>num;
    int maxdigit = -1;
    cout<<"The largest digit in "<<num<<" is: "<<maxdigitfunc(num , maxdigit);
    return 0;
}