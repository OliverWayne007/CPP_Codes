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
        ll n;
        cin >> n;
        vector<ll> v;
        ll num = n , idx = 0;
        while(num > 0)
        {
            if(num % 10 != 0)
            {
                idx++;
            }
            v.push_back(num % 10);
            num = num/10;
        }
        cout << idx << endl;
        for(ll j = 0 ; j < v.size() ; j++)
        {
            if(v[j] == 0)
            {
                continue;
            }
            else
            {
                ll k = 1 , cnt = 0;
                while(cnt < j)
                {
                    k = k * 10;
                    cnt++;
                }
                cout << v[j] * k << " ";
            }
        }
        cout << endl;
    }
    return 0;
}