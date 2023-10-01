#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin>>n>>x;
    ll cnt = x , dis = 0;
    for(ll i = 1 ; i<=n ; i++)
    {
        char c; ll y;
        cin>>c>>y;
        if(c == '+')
        {
            cnt = cnt + y;
        }
        else
        {
            if(y>cnt)
            {
                dis++;
                continue;
            }
            cnt = cnt - y;
        }
    }
    cout<<cnt<<" "<<dis<<endl;
    return 0;
}