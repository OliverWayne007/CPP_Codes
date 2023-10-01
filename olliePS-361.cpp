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
    ll start = -1;
    for(ll i = 0 ; i < n-1 ; i++)
    {
        if(v[i] == 0)
        {
            continue;
        }
        else
        {
            start = i;
            break;
        }
    }
    if(start == -1)
    {
        cout << 0 << endl;
        return;
    }
    ll end = start , ans = 0;
    while(end < n)
    {
        if(v[end] != 0)
        {
            end++;
        }
        else
        {
            v[start] -= 1;
            v[end] += 1;
            ans++;
            if(v[start] == 0)
            {
                start++;
            }
        }
    }
    for(auto it : v)
    {
        ans += it;
    }
    ans -= v[n - 1];
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
      solution(t);
      t++;        
   }
   return 0;
}