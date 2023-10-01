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
    vector<ll> input;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        input.push_back(x);
    }
    ll x , y;
    cin >> x >> y;
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        ll oc = 0 , zc = 0;
        for(ll j = i ; j < n ; j++)
        {
            if(input[j] ==  0)
            {
                zc += 1;
            }
            else
            {
                oc += 1;
            }
            if(zc * y == oc * x)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
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