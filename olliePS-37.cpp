#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(3 , 0);
    for(ll i = 0 ; i<n ; i++)
    {
        ll x , y , z;
        cin>>x>>y>>z;
        v[0] = v[0] + x;
        v[1] = v[1] + y;
        v[2] = v[2] + z;
    }
    bool check = true;
    for(int i = 0 ; i<3 ; i++)
    {
        if(v[i] == 0)
        {
            continue;
        }
        else
        {
            check = false;
            break;
        }
    }
    if(check == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}