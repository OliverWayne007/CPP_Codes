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
    map<ll , ll> mp;
    set<ll> st;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
        mp[x]++;
    }
    ll sum = 0;
    for(auto it : st)
    {
        sum += mp[it]/2;
    }
    cout << sum << endl;
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