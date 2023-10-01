#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll zc = 0 , oc = 0;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin>>x;
        if(x == 0)
        {
            zc++;
        }
        else
        {
            oc++;
        }
    }
    if(oc>0)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}