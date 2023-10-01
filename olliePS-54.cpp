#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    int count = 0;
    for(ll i = 0 ; i<n ; i++)
    {
        ll p , q;
        cin>>p>>q;
        if((q-p)>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}