#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll oc = 0 , twc = 0 , thc = 0 , cnt = 0 , r1 = 0 , r2 = 0;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin>>x;
        if(x == 1)
        {
            oc++;
        }
        else if(x == 2)
        {
            twc++;
        }
        else if(x == 3)
        {
            thc++;
        }
        else
        {
            cnt++;
        }
    }
    if(thc == oc)
    {
        cnt += thc;
    }
    if(thc>oc)
    {
        cnt = cnt + thc;
    }
    if(thc<oc)
    {
        cnt += thc;
        r1 = oc-thc;
    }
    if(twc%2 == 0)
    {
        cnt += twc/2;
    }
    if(twc%2 != 0)
    {
        cnt += (twc-1)/2;
        r2 = 1;
    }
    if(r1>0 && r2 == 0)
    {
        if(r1%4 == 0)
        {
            cnt = cnt + (r1/4);
        }
        else
        {
            cnt = cnt + (r1/4) + 1;
        }
    }
    if(r2 == 1 && r1 == 0)
    {
        cnt = cnt + 1;
    }
    if(r1>0 && r2 == 1)
    {
        if(r1<=2)
        {
            cnt = cnt + 1;
        }
        else
        {
            if((r1-2)%4 == 0)
            {
                cnt = cnt + 1 + (r1-2)/4;
            }
            else if((r1-2)%4 != 0)
            {
                cnt = cnt + 1 + (r1-2)/4 + 1;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}