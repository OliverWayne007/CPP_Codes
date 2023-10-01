#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n,k;
        cin>>n>>k;
        if(n<k)
        {
            cout<<-1<<endl;
        }
        if(n == 1 && k == 1)
        {
            cout<<1<<endl;
        }
        else if(n>1 && k<2)
        {
            cout<<-1<<endl;
        }
        else if(n>1 && k>=2)
        {
            for(ll i = 1 ; i<k ; i++)
            {
                cout<<i<<" ";
            }
            for(ll i = n ; i>=k ; i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}