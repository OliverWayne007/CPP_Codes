#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,h;
    cin>>n>>h;
    ll cnt = 0;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin>>x;
        if(x<=h)
        {
            cnt++;
        }
        else
        {
            cnt += 2;
        }
    }
    cout<<cnt<<endl;
    return 0;
}