#include<bits/stdc++.h>
using namespace std;
#define ll long long
// TRAPPING RAIN WATER !!! ---------- APPROACH-2
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i = 0 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll lmax = INT_MIN;
    ll rmax = INT_MIN;
    int i = 0 , j = n-1;
    ll count = 0;
    while(i<=j && i<n)
    {
        lmax = max(lmax,v[i]);
        rmax = max(rmax,v[j]);
        if(i == j)
        {
            if(min(lmax,rmax)-v[i] > 0)
            {
                count = count + min(lmax,rmax)-v[i];
            }
            rmax = INT_MIN;
            j = n-1;
            i++;
        }
        else
        {
            j--;
        }
    }
    cout<<count<<endl;
    return 0;
}