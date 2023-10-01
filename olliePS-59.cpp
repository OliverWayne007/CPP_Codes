#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin>>x;
        v[i] = x;
    }
    int i = 1 , j = n , s_points = 0 , d_points = 0 , count = 1;
    while(j>=i)
    {
        if((v[i]>=v[j]) && count%2 != 0)
        {
            count++;
            s_points+=v[i];
            i++;
        }
        else if((v[i]<=v[j]) && count%2 != 0)
        {
            count++;
            s_points+=v[j];
            j--;
        }
        else if((v[i]>=v[j]) && count%2 == 0)
        {
            count++;
            d_points+=v[i];
            i++;
        }
        else if((v[i]<=v[j]) && count%2 == 0)
        {
            count++;
            d_points+=v[j];
            j--;
        }
    }
    cout<<s_points<<" "<<d_points<<endl;
    return 0;
}