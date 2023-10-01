#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i = 0 ; i < n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin() , v.end());
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}