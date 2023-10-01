#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution()
{
    ll n; 
    cin >> n;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll suffix_ops = 0 , prefix_ops = 0;
    for(ll i = 0 ; i < n-1 ; i++)
    {
        ll shit = v[i+1] - suffix_ops;
        if(v[i] == shit)
        {
            v[i+1] -= suffix_ops;
        }
        else if(v[i] < shit)
        {
            suffix_ops += shit - v[i];
            v[i+1] -= suffix_ops;
        }
        else
        {
            prefix_ops += v[i] - shit;
            v[i+1] -= suffix_ops;
        }
    }
    ll mops = prefix_ops + suffix_ops + abs(v[n-1]);
    cout << mops << endl;
    return;
}

int main()
{
   flash();
   ll t;
   cin >> t;
   while(t--)
   {
      solution();
   }
   return 0;
}