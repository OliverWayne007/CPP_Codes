#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n , x , y;
        cin>>n>>x>>y;
        vector<ll>va , vb;
        for(ll i = 1 ; i<=n ; i++)
        {
            ll p;
            cin>>p;
            va.push_back(p);
        }
        for(ll i = 1 ; i<=n ; i++)
        {
            ll p;
            cin>>p;
            vb.push_back(p);
        }
        ll cx = 0 , cy = 0;
        for(ll i = 0 ; i<n ; i++)
        {
            if(vb[i]-va[i] != x && vb[i]-va[i] != y)
            {
                break;
            }
            else if(vb[i]-va[i] == x)
            {
                cx++;
            }
            else if(vb[i]-va[i] == y)
            {
                cy++;
            }
        }
        if(cx+cy != n)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}