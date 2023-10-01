#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b) == c || (b+c) == a || (a+c) == b)
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