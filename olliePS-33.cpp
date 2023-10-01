#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n;
        cin>>n;
        ll maxi = INT_MIN , mini = INT_MAX;
        for(int i = 0 ; i<n ; i++)
        {
            ll x;
            cin>>x;
            maxi = max(maxi , x);
            mini = min(mini , x);
        }
        cout<<(maxi-mini)<<endl;
    }
    return 0;
}