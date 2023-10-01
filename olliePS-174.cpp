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
        ll n , k;
        cin >> n >> k;
        vector<ll> v , vec;
        for(ll j = 1 ; j <= n ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin() , v.end());
        for(ll j = 1 ; j <= k ; j++)
        {
            ll x;
            cin >> x;
            vec.push_back(x);
        }
        sort(vec.begin() , vec.end());
        ll mxs = 0 , start = 0 , end = n-1;
        for(ll j = 0 ; j < k ; j++)
        {
            if(vec[j] == 1)
            {
                mxs += 2 * v[end];
            }
            else
            {
                mxs += v[end];
            }
            vec[j]--;
            end--;
        }
        for(ll j = 0 ; j < k ; j++)
        {
            if(vec[j] == 0)
            {
                continue;
            }
            else
            {
                if(vec[j] == 1)
                {
                    mxs += v[end];
                    end--;
                }
                else
                {
                    while(vec[j] > 1)
                    {
                        vec[j]--;
                        end--;
                    }
                    mxs += v[end];
                    end--;
                }
            }
        }
        cout << mxs << endl;
    }
    return 0;
}
