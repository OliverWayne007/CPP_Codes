#include<iostream>
using namespace std;

class Student
{
    private:
    int scores[5];

    public:
    void input(int a , int b , int c , int d , int e)
    {
        scores[0] = a;
        scores[1] = b;
        scores[2] = c;
        scores[3] = d;
        scores[4] = e;
    }
    int calculateTotalScore()
    {
        int sum = 0;
        for(int i = 0 ; i<5 ; i++)
        {
            sum = sum+scores[i];
        }
        
        return sum;
    }

};

int main()
{
    return 0;
}