#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll uc_count = 0 , police_count = 0;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin>>x;
        if(x == -1 && police_count == 0)
        {
            uc_count++;
        }
        else if(x == -1 && police_count != 0)
        {
            police_count--;
        }
        else if(x>0)
        {
            police_count = police_count + x;
        }
    }
    cout<<uc_count<<endl;
    return 0;
}