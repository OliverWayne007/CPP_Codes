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
    ll n , q;
    cin >> n >> q;
    vector<ll> v , ps;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin() , v.end());
    ll sum = 0;
    for(ll i = n-1 ; i >= 0 ; i--)
    {
        sum += v[i];
        ps.push_back(sum);
    }
    for(ll i = 1 ; i <= q ; i++)
    {
        ll x;
        cin >> x;
        if(x > ps[n-1])
        {
            cout << -1 << endl;
        }
        else if(x < ps[0])
        {
            cout << 1 << endl;
        }
        else
        {
            ll idx = (upper_bound(ps.begin() , ps.end() , x) - ps.begin());
            if(ps[idx-1] == x)
            {
                idx = idx - 1;
            }
            cout << idx + 1 << endl;
        }
    }
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