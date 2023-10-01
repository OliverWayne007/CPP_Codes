#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(int i = 1 ; i<=t ; i++)
    {
        vector<ll>v;
        for(int i = 0 ; i<7 ; i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }

        int n = v[v.size()-1]-v[1]-v[0];
        cout<<v[0]<<" "<<v[1]<<" "<<n<<endl;
    }
    return 0;
}