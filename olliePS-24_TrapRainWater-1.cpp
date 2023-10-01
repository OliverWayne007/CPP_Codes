#include<bits/stdc++.h>
using namespace std;
#define ll long long
// TRAPPING RAIN WATER PROBLEM !!! ---------- APPROACH-1
int main()
{
    ll n;
    cin>>n;
    vector<ll>height;
    vector<ll>leftmax;
    vector<ll>rightmax(n);
    ll lmax = INT_MIN;
    ll rmax = INT_MIN;
    for(ll i = 0 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        height.push_back(x);
        lmax = max(lmax,x);
        leftmax.push_back(lmax);
    }

    // for(auto it = height.begin() ; it!=height.end() ; it++)
    // {
    //     cout<<(*it)<<" ";
    // }

    // cout<<endl;

    // for(auto it = leftmax.begin() ; it!=leftmax.end() ; it++)
    // {
    //     cout<<(*it)<<" ";
    // }

   // cout<<endl;

    for(ll i = n-1 ; i>=0 ; i--)
    {
        rmax = max(rmax,height[i]);
        rightmax[i] = rmax;
    }

    // for(auto it = rightmax.begin() ; it!=rightmax.end() ; it++)
    // {
    //     cout<<(*it)<<" ";
    // }

    //cout<<endl;

    ll count = 0;
    for(ll i = 0 ; i<n ; i++)
    {
        if(min(leftmax[i],rightmax[i])-height[i] > 0)
        {
            count = count + min(leftmax[i],rightmax[i])-height[i];
        }
        else
        {
            continue;
        }
    }
    cout<<count<<endl;
    return 0;
}