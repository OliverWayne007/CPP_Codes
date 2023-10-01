#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check_digits(int x)
{
    int a = x%10 , b = (x/10)%10 , c = (x/100)%10 , d = (x/1000)%10;
    if(a==b||a==c||a==d||b==c||b==d||c==d)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int n;
    cin>>n;
    int num = n+1;
    if(check_digits(num) == true)
    {
        cout<<num<<endl;
    }
    else
    {
        while(check_digits(num) == false)
        {
            num += 1;
        }
        cout<<num<<endl;
    }
    return 0;
}