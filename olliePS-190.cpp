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
        vector<ll> v;
        for(ll j = 1 ; j <= n ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        vector<ll> vec(n+1 , 0);
        for(ll j = 0 ; j < n ; j++)
        {
            while(v[j] >= 1)
            {
                if(v[j] > n)
                {
                    v[j] /= 2;
                }
                else
                {
                    if(vec[v[j]] == 0)
                    {
                        vec[v[j]]++;
                        break;
                    }
                    else
                    {
                        v[j] /= 2;
                    }
                }
            }
        }
        bool check = true;
        for(ll j = 1 ; j <= n ; j++)
        {
            if(vec[j] == 0)
            {
                check = false;
            }
        }
        if(check == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}