#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<pair<int,int>>v;
    v.push_back({0,0});
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin() , v.end());
    for(ll i = 1 ; i<=n ; i++)
    {
        cout<<v[i].second<<" ";
    }
    return 0;
}