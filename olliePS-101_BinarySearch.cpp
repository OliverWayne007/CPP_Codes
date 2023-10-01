#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// VERY IMPORTANT QUESTION -------- BASED ON BINARY SEARCH !!!
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
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    for(ll i = 1 ; i<=q ; i++)
    {
        ll m;
        cin>>m;
        ll s = 0 , e = n-1 , idx;
        while(s<=e)
        {
            ll mid = (s+e)/2;
            idx = mid;
            if(m>=v[mid])
            {
                s = mid+1;
            }
            else if(m<v[mid])
            {
                e = mid-1;
            }
        }
        if(m >= v[idx])
        {
            cout<<(idx+1)<<endl;
        }
        else 
        {
            cout<<idx<<endl;
        }
    }
    return 0;
}