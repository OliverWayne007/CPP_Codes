#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    vector<ll> v1;
    bool check = false;
    for(ll i = 1 ; i <= 4 ; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
        if(x == 1)
        {
            check = true;
        }
    }
    ll d;
    cin >> d;
    if(check == true)
    {
        cout << d << endl;
    }
    else
    {
        vector<ll> v2(d+1 , 1);
        v2[0] = -1;
        for(ll i = 0 ; i < v1.size() ; i++)
        {
            if(v2[v1[i]] == 0)
            {
                continue;
            }
            else if(v2[v1[i]] == 1)
            {
                for(ll j = v1[i] ; j <= d ; j += v1[i])
                {
                    v2[j] = 0;
                }
            }
        }
        ll cnt = 0;
        for(auto it : v2)
        {
            if(it == 0)
            {
                cnt++;
            }
            else
            {
                continue;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}