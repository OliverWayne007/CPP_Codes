#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll a , b , c;
        cin>>a>>b>>c;
        if(((2*b-a)%c == 0 && (2*b-a)>0) || ((2*b-c)%a == 0 && (2*b-c)>0) || (a+c)%(2*b) == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}