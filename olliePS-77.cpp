#include<bits/stdc++.h>
using namespace std;
#define ll long long
// THIS IS THE RECURSIVE CODE FOR THE PRIME + FIBONACCI PROBLEM
bool isPrime(ll x)
{
    vector<ll>v(x+1,1);
    v[1] = 0 , v[0] = 0;
    for(ll i = 2 ; i<=x ; i++)
    {
        if(v[i] == 0)
        {
            continue;
        }
        else
        {
            for(ll j = i*i ; j<=x ; j = j+i)
            {
                v[j] = 0;
            }
        }
    }
    if(v[x] == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

vector<ll>vec(51 , -1);

ll fib(ll n)
{
    if(n == 1 || n == 2)
    {
        if(vec[n] != -1)
        {
            return vec[n];
        }
        vec[n] = n-1;
        return vec[n];
    }
    else
    {
        if(vec[n] != -1)
        {
            return vec[n];
        }
        vec[n] = fib(n-1)+fib(n-2);
        return vec[n];
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
        ll x = fib(n);
        if(isPrime(x) == true)
        {
            cout<<"prime"<<endl;
        }
        else
        {
            cout<<"not prime"<<endl;
        }
    }
    return 0;
}