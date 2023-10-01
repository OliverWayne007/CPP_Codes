#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    ll ce = 0 , co = 0;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
        if(x%2 == 0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    if(co == 1)
    {
        for(ll i = 0 ; i<v.size() ; i++)
        {
            if(v[i]%2 != 0)
            {
                cout<<(i+1)<<endl;
                break;
            }
        }
    }
    else
    {
        for(ll i = 0 ; i<v.size() ; i++)
        {
            if(v[i]%2 == 0)
            {
                cout<<(i+1)<<endl;
                break;
            }
        }
    }
    return 0;
}