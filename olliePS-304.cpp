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
    map<ll , ll> mp;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    for(auto it : mp)
    {
        if(it.second == 1)
        {
            cout << -1 << endl;
            return;
        }
    }
    vector<ll> shoe_index;
    for(ll i = 1 ; i <= n ; i++)
    {
        shoe_index.push_back(i);
    }
    for(ll i = 0 ; i < n-1 ; i++)
    {
        if(v[i] == v[i + 1])
        {
            swap(shoe_index[i] , shoe_index[i + 1]);
        }
    }
    for(auto it : shoe_index)
    {
        cout << it << " ";
    }
    cout << endl;
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