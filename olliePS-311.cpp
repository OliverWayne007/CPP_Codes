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
    ll cnt = 0;
    for(ll i = 1 ; i < n-1 ; i++)
    {
        if(v[i] > v[i-1] + v[i+1])
        {
            cnt++;
        }
    }
    if(k > 1)
    {
        cout << cnt << endl;
        return;
    }
    else
    {
        if(n % 2 == 0)
        {
            cout << n/2 - 1 << endl;
            return;
        }
        else
        {
            cout << n/2 << endl;
            return;
        }
    }
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