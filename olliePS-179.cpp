#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
const long long int MOD = 1e9 + 7;
const long long int MAX = 1e9;
const long long int INF = 1e18;

int main()
{
    flash()
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n;
        cin >> n;
        vector<ll> v(n+1 , 0);
        for(ll j = 1 ; j <= n ; j++)
        {
            if(j % 2 == 1)
            {
                v[j] = j;
            }
            else
            {
                v[j] = 2 * v[j - 1];
            }
        }
        for(ll j = 1 ; j <= n ; j++)
        {
            cout << v[j] << " ";
        }
        cout << endl;
    }
    return 0;
}