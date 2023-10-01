#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i = 0 ; i<n ; i++)
    {
        ll a,b;
        cin>>a>>b;
        pair<ll,ll>p = {a,b};
        v.push_back(p);
    }
    ll ms = v[0].second , cs = v[0].second;
    for(ll i = 1 ; i<n ; i++)
    {
        cs = (cs - v[i].first) + v[i].second;
        ms = max(ms , cs);
    }
    cout<<ms<<endl;
    return 0;
}