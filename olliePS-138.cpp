#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
        if(n == 1)
        {
            cout << "YES" << endl;
        }
        else{
        sort(v.begin() , v.end());
        bool check = true;
        for(ll j = 0 ; j < n-1 ; j++)
        {
            if(abs(v[j] - v[j+1]) <= 1)
            {
                continue;
            }
            else
            {
                check = false;
                break;
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
    }
    return 0;
}