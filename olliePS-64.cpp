#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        int tv = p+q+r , vr = a+b+c;
        if(vr>=(tv/2))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(vr+(p-a)>(tv/2) || vr+(q-b)>(tv/2) || vr+(r-c)>(tv/2))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}