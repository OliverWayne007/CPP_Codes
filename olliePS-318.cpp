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
    map<ll , ll> mp1 , mp2;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        mp1[x] = i;
    }
    for(ll i = n ; i >= 1 ; i--)
    {
        mp2[v[i - 1]] = i;
    }
    for(ll i = 1 ; i <= k ; i++)
    {
        ll a , b;
        cin >> a >> b;
        if(mp2.find(a) == mp2.end() || mp1.find(b) == mp1.end())
        {
            cout << "NO" << endl;
        }
        else if(mp2[a] <= mp1[b])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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
    cout << endl;
    solution();
   }
   return 0;
}