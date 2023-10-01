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
    for(ll i = 1 ; i <=t ; i++)
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
        if(v[n-2] > v[n-1])
        {
            cout << -1 << endl;
        }
        else
        {
            ll cnt = 0;
            vector<pair<ll , pair<ll , ll>>> vec;
            if(v[n-3] != min(v[n-3] , v[n-2] - v[n-1]))
            {
                v[n-3] = min(v[n-3] , v[n-2] - v[n-1]);
                vec.push_back({n-2 , {n-1 , n}});
                cnt++;
            }
            if(v[n-3] > v[n-2])
            {
                cout << -1 << endl;
            }
            else
            {
                bool check = true;
                for(ll j = n-4 ; j >= 0 ; j--)
                {
                    if(v[j] != min(v[j] , v[j+1] - v[n-1]))
                    {
                        v[j] = min(v[j] , v[j+1] - v[n-1]);
                        vec.push_back({j+1 , {j+2 , n}});
                        cnt++;
                    }
                    if(v[j] > v[j+1])
                    {
                        check = false;
                        break;
                    }
                }
                if(check == false)
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << cnt << endl;
                    for(auto it : vec)
                    {
                        cout << it.first << " " << (it.second).first << " " << (it.second).second << endl;
                    }
                }
            }
        }
    }
    return 0;
}