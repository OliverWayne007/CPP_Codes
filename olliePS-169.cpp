#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n;
        cin >> n;
        if(n % 2 == 0)
        {
            if(n == 2)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << 2 << " " << 3 << " " << 1 << " ";
                for(ll j = 4 ; j <= n ; j++)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
        }
        else
        {
            for(ll j = 1 ; j <= n ; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}