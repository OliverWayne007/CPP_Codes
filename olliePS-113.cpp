#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n,k;
    cin>>n>>k;
    ll av = 240-k;
    if(av == 0)
    {
        cout<<0<<endl;
    }
    else
    {
        ll sum = 0 , cnt = 0;
        for(ll i = 1 ; i<=n ; i++)
        {
            if(sum+(5*i)<=av)
            {
                sum += (5*i);
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}