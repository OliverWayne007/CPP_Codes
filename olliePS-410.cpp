#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
    ll n;
    cin >> n;
    vector<ll> a;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    ll ans = 1e18;
    for(ll i = 0 ; i < n ; i++)
    {
        ll moves = 0 , prev = 0;
        for(ll j = i - 1 ; j >= 0 ; j--)
        {
            ll req_steps = (0 - prev)/a[j] + 1;
            moves += req_steps;
            prev = -1 * (a[j] * req_steps);
        }
        prev = 0;
        for(ll k = i + 1 ; k < n ; k++)
        {
            ll req_steps = (prev - 0)/a[k] + 1;
            moves += req_steps;
            prev = a[k] * req_steps;
        }
        ans = min(ans , moves);
    }
    cout << ans << endl;
    return;
}

int main()
{
   flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}