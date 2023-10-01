#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        for(int i = 0 ; i<n ; i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin() , v.end());
        int start = 0 , end = n-2;
        if(v[start] == v[n-1])
        {
            cout<<0<<endl;
        }
        else
        {
            int count = 0;
            while(end>=start)
            {
                if(v[end] == v[n-1])
                {
                    end--;
                    continue;
                }
                else
                {
                    for(int j = start ; j<=end ; j++)
                    {
                        v[j]++;
                    }
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}