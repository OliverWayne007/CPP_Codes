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
    ll n , q;
    cin >> n >> q;
    vector<ll> price;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        price.push_back(x);
    }
    sort(price.begin() , price.end());
    reverse(price.begin() , price.end());
    vector<ll> v;
    ll sum = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        sum += price[i];
        v.push_back(sum);
    }
    for(ll i = 1 ; i <= q ; i++)
    {
        ll x , y;
        cin >> x >> y;
        if(x == y)
        {
            cout << v[x - 1] << endl;
        }
        else
        {
            cout << v[x - 1] - v[x - y - 1] << endl;
        }
    }
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