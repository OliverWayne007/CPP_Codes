#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n , k;
        cin >> n >> k;
        vector<ll> v;
        for(ll j = 0 ; j < k ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        vector<ll> vec;
        for(ll j = 0 ; j <= v[k-1] ; j++)
        {
            vec.push_back(j);
        }
        for(ll j = 0 ; j < k ; j++)
        {
            if(j == 0)
            {
                if(v[j] == 1)
                {
                    continue;
                }
                else
                {
                    reverse(vec.begin() + 1 , vec.begin() + v[j] + 1);
                }
            }
            if(j > 0)
            {
                if(v[j] - v[j-1] == 1)
                {
                    continue;
                }
                else
                {
                    reverse(vec.begin() + v[j-1] + 1 , vec.begin() + v[j] + 1);
                }
            }
        }
        for(ll j = 1 ; j < vec.size() ; j++)
        {
            cout << vec[j] << " ";
        }
        cout << endl;
    }
    return 0;
}