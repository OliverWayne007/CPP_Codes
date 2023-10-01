#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    ll min_moves = 0;
    for(ll i = 0 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    if(v.size() == 1)
    {
        cout<<0;
    }
    
    else
    {
        for(ll i = 0 ; i<n ; i++)
        {
            if(v[i]<=v[i+1])
            {
                continue;
            }
            else if(v[i]>v[i+1])
            {
                ll diff = v[i] - v[i+1];
                min_moves = min_moves + diff;
                v[i+1] = v[i];
            }
        }
    
        cout<<min_moves;
    }
    
    return 0;
}