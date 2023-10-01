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
    ll n , k;
    cin >> n >> k;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll mx = 0 , cnt = k;
    for(ll bit = 30 ; bit >= 0 ; bit--)
    {
        ll zc = 0;
        for(ll i = 0 ; i < n ; i++)
        {
            if((v[i] & (1 << bit)) == 0)
            {
                zc++;
            }
        }
        if(zc <= cnt)
        {
            mx += (1 << bit);
            cnt = cnt - zc;
        }
    }
    cout << mx << endl;
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