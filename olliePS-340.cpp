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
    map<ll , ll> mp;
    for(auto it : v)
    {
        mp[it]++;
    }
    ll mx = 0;
    for(auto it : mp)
    {
        mx = max(mx , it.second);
    }
    ll cnt = 0;
    for(auto it : mp)
    {
        if(it.second == mx)
        {
            cnt++;
        }
    }
    if(cnt == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    else
    {
        cout << "No" << endl;
        return;
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