#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a , b;
    cin>>a>>b;
    int count = 0;
    while(a<=b)
    {
        count++;
        a = 3*a;
        b = 2*b;
    }
    cout<<count<<endl;
    return 0;
}