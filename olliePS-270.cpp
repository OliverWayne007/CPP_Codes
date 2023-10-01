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
    vector<ll> v;
    ll sum = 0;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    vector<ll> vec = v;
    for(ll i  = 1 ; i <= q ; i++)
    {
        int t;
        cin >> t;
        if(t == 1)
        {
            ll idx , val;
            cin >> idx >> val;
            if(prev != -1 && vec[idx - 1] == -1)
            {
                if(v[idx - 1] != prev)
                {
                    v[idx - 1] = prev;
                }
            }
            sum = (sum - v[idx - 1]) + val;
            v[idx - 1] = val;
            vec[idx - 1] = val;
        }
        else
        {
            ll val;
            cin >> val;
            sum = n * val;
            prev = val;
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