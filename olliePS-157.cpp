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
        vector<ll> a , b;
        for(ll j = 0 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        for(ll j = 0 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        ll p = 0 , q = n-1 , cnt = 1;
        while(cnt <= k && a[p] < b[q])
        {
            ll temp = a[p];
            a[p] = b[q];
            b[q] = temp;
            p++;
            q--;
            cnt++;
        }
        ll sum = 0;
        for(auto it : a)
        {
            sum += it;
        }
        cout << sum << endl;
    }
    return 0;
}