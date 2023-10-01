#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x == 0)
        {
            cout<<0<<endl;
        }
        else if(y == 0)
        {
            cout<<x<<endl;
        }
        else if(x == y && x>0)
        {
            cout<<(2*y-1)<<endl;
        }
        else
        {
            cout<<(2*y)+(x-y)<<endl;
        }
    }
    return 0;
}