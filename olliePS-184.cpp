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
        ll n , k;
        cin >> n >> k;
        if(k == 1)
        {
            cout << "YES" <<endl;
            for(ll j = 1 ; j <= n ; j++)
            {
                cout << j << endl;
            }
        }
        else
        {
            if(n == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                if((n * k) % 2 != 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    if((n * k)/2 % k != 0)
                    {
                        cout << "NO" << endl;
                    }
                    else
                    {
                        cout << "YES" << endl;
                        ll o = 1 , e = 2;
                        for(ll j = 1 ; j <= n/2 ; j++)
                        {
                            for(ll s = 1 ; s <= k ; s++)
                            {
                                cout << o << " ";
                                o += 2;
                            }
                            cout << endl;
                        }
                        for(ll j = 1 ; j <= n/2 ; j++)
                        {
                            for(ll s = 1 ; s <= k ; s++)
                            {
                                cout << e << " ";
                                e += 2;
                            }
                            cout << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}