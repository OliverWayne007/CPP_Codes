#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll a,b;
        cin>>a>>b;
        if(a%b == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<b-(a%b)<<endl;
        }
    }
    return 0;
}