#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n;
        cin>>n;
        ll m = 2*n;
        ll h = sqrt(m);
        while(((h*h)+h) > m)
        {
            h--;
        }
        cout<<h<<endl;
    }
    return 0;
}