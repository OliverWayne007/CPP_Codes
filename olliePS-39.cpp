#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll ct = 0;

ll mincount(ll n)
{
    if(n == 0)
    {
        return ct;
    }
    if(n>=100)
    {
        ct = ct + n/100;
        return mincount(n%100);
    }
    else if(n>=50)
    {
        ct = ct + n/50;
        return mincount(n%50);
    }
    else if(n>=10)
    {
        ct = ct + n/10;
        return mincount(n%10);
    }
    else if(n>=5)
    {
        ct = ct + n/5;
        return mincount(n%5);
    }
    else if(n>=2)
    {
        ct = ct + n/2;
        return mincount(n%2);
    }
    else if(n==1)
    {
        ct = ct + n;
        return mincount(0);
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
        cout<<mincount(n)<<endl;
        ct = 0;
    }
    return 0;
}