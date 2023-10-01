#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll t;
    cin>>t;
    for(ll i = 1 ; i<= t ; i++)
    {
        ll a,b;
        cin>>a>>b;
        if((a+b)<4 || a == 0 || b == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            ll noq = min((a+b)/4 , min(a,b));
            cout<<noq<<endl;
        }
    }
    return 0;
}