#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll x;
        cin>>x;
        int exp = 0 , num = -1;
        while(num<=x)
        {
            num = pow(2,exp)-1;
            exp++;
        }
        cout<<0<<" "<<x<<" "<<(2*(num+1))-1<<endl;
    }
    return 0;
}