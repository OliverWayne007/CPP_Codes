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
        ll n;
        cin >> n;
        vector<ll> v;
        for(ll j = 0 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin() , v.end());
        ll blue = 1 , red = n-1 , sr = 0 , sb = v[0] , cr = 0 , cb = 1;
        if(v[0] == v[n-1])
        {
            cout << "NO" << endl;
        }
        else
        {
            bool check = false;
            while(blue < red)
            {
                if(sr > sb && cr < cb)
                {
                    check = true;
                    break;
                }
                sr += v[red];
                cr++;
                red--;
                sb += v[blue];
                cb++;
                blue++;
            }
            if(check == false)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}