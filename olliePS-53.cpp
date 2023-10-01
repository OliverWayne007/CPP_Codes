#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n , m , sum1 = 0 , sum2 = 0;
    cin>>n>>m;
    for(ll i = 0 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        sum1 = sum1 + x;
    }
    for(ll i = 0 ; i<m ; i++)
    {
        ll y;
        cin>>y;
        sum2 = sum2 + y;
    }
    if(sum1 == sum2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}