#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll total = 0;
    vector<ll>v;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
        total += x;
    }
    sort(v.begin() , v.end());
    int i = n-1;
    ll my_total = 0 , mc = 0;
    while(my_total <= (total-my_total) && i>=0)
    {
        my_total += v[i];
        mc++;
        i--;
    }
    cout<<mc<<endl;
    return 0;
}