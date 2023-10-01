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
    string str;
    cin >> str;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll ans = 0 , idx = -1;
    for(ll i = 0 ; i < n ; i++)
    {
        if(str[i] == '0')
        {
            idx = i;
            continue;
        }
        if(str[i] == '1' && idx == -1)
        {
            continue;
        }
        if(str[i] == '1' && idx != -1)
        {
            if(v[idx] > v[i])
            {
                swap(str[idx] , str[i]);
                idx = i;
                continue;
            }
        }
    }
    for(ll i = 0 ; i < n ; i++)
    {
        if(str[i] == '1')
        {
            ans += v[i];
        }
    }
    cout << ans << endl;
    return;
}

int main()
{
   flash();
   ll tc;
   cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}