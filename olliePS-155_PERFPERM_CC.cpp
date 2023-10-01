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
        vector<ll> v(n+1 , 0);
        v[1] = n;
        for(ll j = 2 ; j <= n ; j++)
        {
            v[j] = j - 1; 
        }
        if(k == n)
        {
            for(ll j = 1 ; j <= k ; j++)
            {
                cout << j << " ";
            }

            cout << endl;
        }
        else if(k == 1)
        {
            for(ll j = 1 ; j <= n ; j++)
            {
                cout << v[j] << " ";
            }

            cout << endl;
        }
        else
        {
            for(ll j = 2 ; j <= k ; j++)
            {
                ll temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
            for(ll j = 1 ; j <= n ; j++)
            {
                cout << v[j] << " ";
            }

            cout << endl;
        }
    }
    return 0;
}