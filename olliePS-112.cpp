#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n;
        cin>>n;
        ll cnt1 = 0 , cnt2 = 0;
        for(ll j = 1 ; j<=n ; j++)
        {
            ll x;
            cin>>x;
            if(x == 1)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        if((cnt1 + 2*(cnt2)) % 2 != 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(cnt1 == 0 && cnt2%2 != 0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}