#include<iostream>
using namespace std;
// PRINTING ALL HARSHAD's NUMBERS FROM 100 TO 900 !!!
int SumofDigits(int num , int sum)
{
    int rem = num%10;
    int quo = num/10;
    sum = sum + rem;
    if(quo==0)
    {
        return sum;
    }
    else
    {
        SumofDigits(quo , sum);
    }
}

int main()
{
    for(int i = 100 ; i<=900 ; i++)
    {
        int sum = 0;
        int sod = SumofDigits(i , sum);
        if(i%sod==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}