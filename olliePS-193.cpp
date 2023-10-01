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
        if(n >= 10 && n < 100)
        {
            if((n % 10) % 2 == 0 && (n/10) % 2 != 0)
            {
                cout << "NO" << endl;
            }
            else if((n % 10) % 2 != 0 && (n/10) % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            ll co = 0 , ce = 0;
            ll num = n/10;
            while(num > 0)
            {
                if((num % 10) % 2 == 0)
                {
                    ce++;
                }
                else
                {
                    co++;
                }
                num = num/10;
            }
            if((n % 10) % 2 == 0)
            {
                if(ce == 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                if(co == 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
    return 0;
}