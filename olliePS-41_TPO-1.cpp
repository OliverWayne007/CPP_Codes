#include<bits/stdc++.h>
using namespace std;
// TPO-1_Counting-10
#define ll long long 

ll cdd(ll n)
{
    if(1<=n<=9)
    {
        return n;
    }
    else if(n == 10)
    {
        return 9;
    }
    else if(n>10)
    {

    }
}

int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n;
        cin>>n;
        cout<<cdd(n)<<endl;
    }
    return 0;
}