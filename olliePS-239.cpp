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
    ll n , m;
    cin >> n >> m;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    if(n >= m)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        sort(v.begin() , v.end());
        ll cnt = n;
        for(ll i = 0 ; i < n-1 ; i++)
        {
            cnt += max(v[i] , v[i+1]);
        }
        cnt += max(v[0] , v[n-1]);
        if(cnt <= m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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