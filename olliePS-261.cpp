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
    ll cnt = 0 , idx = -1;
    for(ll i = n-2 ; i >= 0 ; i--)
    {
        if(v[i+1] == 0)
        {
            idx = i+1;
            break;
        }
        else if(v[i] < v[i+1])
        {
            continue;
        }
        else
        {
            while(v[i] >= v[i+1])
            {
                v[i] = v[i]/2;
                cnt++;
            }
        }
    }
    if(idx != -1)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << cnt << endl;
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