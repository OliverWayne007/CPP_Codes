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
    vector<ll> arr(10 , 0);
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        arr[x % 10]++;
    }
    for(ll i = 0 ; i < 10 ; i++)
    {
        if(arr[i] == 0)
        {
            continue;
        }
        arr[i]--;
        for(ll j = 0 ; j < 10 ; j++)
        {
            if(arr[j] == 0)
            {
                continue;
            }
            arr[j]--;
            for(ll k = 0 ; k < 10 ; k++)
            {
                if(arr[k] == 0)
                {
                    continue;
                }
                if((i + j + k) % 10 == 3)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
            arr[j]++;
        }
        arr[i]++;
    }
    cout << "NO" << endl;
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