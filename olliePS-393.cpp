#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

vector<vector<bool>> vec(1001 , vector<bool> (1001 , false));

void Coprimes()
{
    for(ll i = 1 ; i <= 1000 ; i++)
    {
        for(ll j = i ; j <= 1000 ; j++)
        {
            ll hcf = __gcd(i , j);
            if(hcf == 1)
            {
                vec[i][j] = true;
            }
            else
            {
                continue;
            }
        }
    }
}

void Solution(ll T)
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
    vector<ll> arr(1001 , -1);
    for(ll i = 0 ; i < n ; i++)
    {
        arr[v[i]] = max(arr[v[i]] , i + 1);
    }
    ll ans = -1;
    for(ll i = 1 ; i <= 1000 ; i++)
    {
        if(arr[i] == -1)
        {
            continue;
        }
        else
        {
            for(ll j = i ; j <= 1000 ; j++)
            {
                if(arr[j] == -1)
                {
                    continue;
                }
                else
                {
                    if(vec[i][j] == true)
                    {
                        ans = max(ans , arr[i] + arr[j]);
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return;
}

int main()
{
   flash();
   ll tc;
   cin >> tc;
   Coprimes();
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}