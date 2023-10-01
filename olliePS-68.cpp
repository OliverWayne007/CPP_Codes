#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll x,a,b;
        cin>>x>>a>>b;
        if(x == 1 && a == b)
        {
            cout<<1<<endl;
        }
        else if(x%a != 0 || a<=b)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<(b*(x/a))<<endl;
        }
    }
    return 0;
}