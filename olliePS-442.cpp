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
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    /* ----------------------------------------- MILLIND's CODE ----------------------------------------------------------- */

    // int r = 1 ;
    // while (r<=n && v[r-1]==r)r ++;
    // if (r == n+1){
    //     cout << "0\n";
    // }
    // else 
    // {
    //     r--;
    //     cout << (n-r+k-1)/k<< "\n";
    // }

    /* ----------------------------------------- MILLIND's CODE ----------------------------------------------------------- */


    /* ----------------------------------------------- MY CODE ----------------------------------------------------------- */
    
    ll cnt = 0 , req = 1;
    for(auto it : v)
    {
        if(it == req)
        {
            cnt++;
            req++;
        }
    }
    ll ans = ((n - cnt) + k - 1)/k;
    cout << ans << endl;
    return;

    /* ----------------------------------------------- MY CODE ----------------------------------------------------------- */
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