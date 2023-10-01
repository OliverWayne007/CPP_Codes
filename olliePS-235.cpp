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
    ll n , k , b;
    cin >> n >> k;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    cin >> b;
    ll sum = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        if(i == k)
        {
            continue;
        }
        sum += v[i];
    }
    if(sum/2 == b)
    {
        cout << "Bon Appetit" << endl;
        return;
    }
    cout << b - sum/2 << endl;
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