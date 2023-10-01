#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    bool rated = false , unrated = false;
    ll maxi = INT_MIN , mini = INT_MAX;
    vector<ll>v;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x , y;
        cin>>x>>y;
        if((x-y) != 0)
        {
            rated = true;
        }
        v.push_back(x);
    }
    if(rated == true)
    {
        cout<<"rated"<<endl;
    }
    else
    {
        for(int i = 0 ; i<v.size() ; i++)
        {
            if(min(mini , v[i]) == v[i])
            {
                mini = min(mini , v[i]);
            }
            else if(min(mini , v[i]) == mini && min(mini , v[i]) != v[i])
            {
                unrated = true;
                break;
            }
        }
        if(unrated == true)
        {
            cout<<"unrated"<<endl;
        }
        else
        {
            cout<<"maybe"<<endl;
        }
    }
    return 0;
}