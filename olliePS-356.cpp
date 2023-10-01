#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll T)
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
    if(n == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll ans = 0;
    for(ll i = 1 ; i < n ; i++)
    {
        if(v[i] >= v[i - 1])
        {
            continue;
        }
        else
        {
            ans += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
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
      solution(t);
      t++;        
   }
   return 0;
}