#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll maxi = INT_MIN , mini = INT_MAX , max_ind = 0 , min_ind = 0;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin>>x;
        if(max(maxi , x) == x && max(maxi , x) != maxi)
        {
            max_ind = i;
            maxi = max(maxi , x);
        }
        else if(max(maxi , x) == x && max(maxi , x) == maxi)
        {
            maxi = max(maxi , x);
        }
        if(min(mini , x) == x)
        {
            min_ind = i;
            mini = min(mini , x);
        }
    }
    if(mini == maxi)
    {
        cout<<0<<endl;
    }
    else if(max_ind < min_ind)
    {
        cout<<(max_ind-1)+(n-min_ind)<<endl;
    }
    else if(max_ind > min_ind)
    {
        cout<<(max_ind-1)+(n-min_ind-1)<<endl;
    }
    return 0;
}