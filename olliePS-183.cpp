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
        ll l , r , a;
        cin >> l >> r >> a;
        if(a == 1)
        {
            cout << r << endl;
        }
        else if(a > r)
        {
            cout << r << endl;
        }
        else if(a == r)
        {
            if(r == l)
            {
                cout << r/a + r % a << endl;
            }
            else
            {
                cout << r - 1 << endl;
            }
        }
        else
        {
            if(r % a == 0)
            {
                if(r > l)
                {
                    cout << (r-1)/a + (r-1) % a << endl;
                }
                else
                {
                    cout << r/a + r % a << endl;
                }
            }
            else
            {
                if(l/a == r/a)
                {
                    cout << r/a + r % a << endl;
                }
                else
                {
                    cout << max((r/a + r % a) , (r/a - 1) + a - 1) << endl;
                }
            }
        }
    }
    return 0;
}