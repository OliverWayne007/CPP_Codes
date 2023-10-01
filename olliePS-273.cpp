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
    ll n, q, sum = 0, last = 0, lastTime = -1;
    cin >> n >> q;
    vector<pair<ll, ll> > v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = 0;
        sum += v[i].first;
    }
    for (ll i = 1; i <= q; i++)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll pos , val;
            cin >> pos >> val;
            ll idx = pos - 1;
            if (v[idx].second > lastTime)
            {
                sum -= v[idx].first;
            }
            else
            {
                sum -= last;
            }
            v[idx].first = val;
            v[idx].second = i;
            sum += val;
        }
        else
        {
            ll val;
            cin >> val;
            lastTime = i;
            last = val;
            sum = val * n;
        }
        cout << sum << endl;
    }
    return;
}

int main()
{
   flash();
   ll t = 1;
   while(t--)
   {
      solution();
   }
   return 0;
}