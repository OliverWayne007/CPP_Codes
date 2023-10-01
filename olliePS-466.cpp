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
    ll n , k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<ll> vc(123 , 0);
    for(auto it : str)
    {
        vc[it]++;
    }
    ll ans = 0 , left = 0;
    for(ll i = 97 ; i < 123 ; i++)
    {
        ans += min(vc[i] , vc[i - 32]);
        left += abs(vc[i] - vc[i - 32])/2;
    }
    ans += min(left , k);
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