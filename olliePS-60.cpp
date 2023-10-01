#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll r , c;
    cin>>r>>c;
    vector<pair<int,int>>v;
    for(ll i = 1 ; i<=r ; i++)
    {
        for(ll j = 1 ; j<=c ; j++)
        {
            char x;
            cin>>x;
            if(x == 'S')
            {
                v.push_back({i,j});
            }
        }
    }
    int row_count = 0 , col_count = 0;
    unordered_map<int,int>mp1 , mp2;
    for(ll i = 0 ; i<v.size() ; i++)
    {
        if(mp1.find(v[i].first) == mp1.end())
        {
            mp1[v[i].first] = 1;
            row_count++;
        }
        if(mp2.find(v[i].second) == mp2.end())
        {
            mp2[v[i].second] = 1;
            col_count++;
        }
    }
    int row_remain = r - row_count , col_remain = c - col_count;
    cout<<(row_remain*c) + (col_remain*r) - (row_remain*col_remain)<<endl;
    return 0;
}