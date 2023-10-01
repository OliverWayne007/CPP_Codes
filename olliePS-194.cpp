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
        vector<ll> vo , ve;
        ll co = 0;
        for(ll j = 1 ; j <= n ; j++)
        {
            ll x;
            cin >> x;
            if(x % 2 != 0)
            {
                co++;
                vo.push_back(x);
            }
            else
            {
                ve.push_back(x);
            }
        }
        ll ce = n - co;
        if(co == 0 || co == 1)
        {
            cout << -1 << endl;
        }
        else if(co % 2 == 0)
        {
            for(auto it : vo)
            {
                cout << it << " ";
            }
            for(auto it : ve)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        else
        {
            if(ce == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                for(ll j = 0 ; j < vo.size()-1 ; j++)
                {
                    cout << vo[j] << " ";
                }
                for(auto it : ve)
                {
                    cout << it << " ";
                }
                cout << vo[vo.size()-1] << endl;
            }
        }

    }
    return 0;
}