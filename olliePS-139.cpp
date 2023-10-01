#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n , a , b , c;
    cin >> n >> a >> b >> c;
    vector<ll> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin() , v.end());
    if(n % v[0] == 0)
    {
        cout << n/v[0] << endl;
    }
    else
    {
        ll div = (n/v[0]) * v[0];
        ll rem = n - div;
        vector<ll> fmx;
        while(div >= 0)
        {
            ll mx;
            if(rem % v[1] == 0)
            {
                mx = rem/v[1];
                fmx.push_back(div/v[0] + mx);
            }
            if(rem % v[2] == 0)
            {
                mx = rem/v[2];
                fmx.push_back(div/v[0] + mx);
            }
            else
            {
                if((rem % v[2]) % v[1] == 0)
                {
                    mx = (rem/v[2]) + (rem % v[2])/v[1];
                    fmx.push_back(div/v[0] + mx);
                }
            }
            div = div - v[0];
            rem = n - div;
        }

        cout << *max_element(fmx.begin() , fmx.end()) << endl;
    }
    return 0;
}