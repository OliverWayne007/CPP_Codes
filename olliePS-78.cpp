#include<bits/stdc++.h>
using namespace std;
#define ll long long
// THIS IS THE ITERATIVE CODE FOR THE PRIME + FIBONACCI PROBLEM
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
    vec[1] = 0 , vec[2] = 1;
    if(n == 1 || n == 2)
    {
        return vec[n];
    }
    else
    {
        if(vec[n] != -1)
        {
            return vec[n];
        }
        for(ll i = 3 ; i<=n ; i++)
        {
            vec[i] = vec[i-1] + vec[i-2];
        }
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