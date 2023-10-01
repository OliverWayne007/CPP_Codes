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
    ll n , p , q , r , s;
    cin >> n >> p >> q >> r >> s;
    vector<ll> v;
    v.push_back(0);
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for(ll i = p ; i <= q ; i++)
    {
        swap(v[i] , v[i + r - p]);
    }
    for(ll i = 1 ; i <= n ; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
   flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}