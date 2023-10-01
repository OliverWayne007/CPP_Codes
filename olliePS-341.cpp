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
    vector<ll> two_pow;
    two_pow.push_back(1);
    for(ll i = 1 ; i <= 30 ; i++)
    {
        two_pow.push_back((ll)pow(2 , i));
    }
    ll cnt = 0;
    while(n > 0)
    {
        ll idx = lower_bound(two_pow.begin() , two_pow.end() , n) - two_pow.begin();
        ll val = *lower_bound(two_pow.begin() , two_pow.end() , n);
        if(val == n)
        {
            cout << cnt << endl;
            return;
        }
        cnt++;
        n = n - two_pow[idx - 1];
    }
    cout << cnt << endl;
    return;
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