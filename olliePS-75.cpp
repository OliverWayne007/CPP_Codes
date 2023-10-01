#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<int>v(m+1,1);
    v[1] = 0;
    int ct = 0;
    for(ll i = 2 ; i<=m ; i++)
    {
        if(v[i] == 0)
        {
            continue;
        }
        else
        {
            if(i >= n)
            {
                ct++;
            }
            for(ll j = i*i ; j<=m ; j = j+i)
            {
                v[j] = 0;
            }
        }
    }
    if(ct == 2 && v[m] == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}