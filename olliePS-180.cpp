#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
const long long int MOD = 1e9 + 7;
const long long int MAX = 1e9;
const long long int INF = 1e18;

int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n , x;
        cin >> n >> x;
        ll mid = n/2 + 1;
        ll mx = mid * (n - mid + 1);
        if(x > mx)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(x <= n)
            {
                cout << "YES" << endl;
            }
            else if(x == mx)
            {
                cout << "YES" << endl;
            }
            else
            {
                bool check = true;
                for(ll j = 2 ; j * j <= x ; j++)
                {
                    if(x % j == 0)
                    {
                        check = false;
                        break;
                    }
                }
                if(check == true)
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