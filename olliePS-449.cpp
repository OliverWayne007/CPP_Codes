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
    vector<ll> v;
    ll sum = 0;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        v.push_back(x);
    }
    ll ans = 1 , curr = 0 , cnt = 1;
    for(auto it : v)
    {
        if(cnt == n)
        {
            break;
        }
        curr += it;
        ans = max(ans , __gcd(curr , sum - curr));
        cnt++;
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