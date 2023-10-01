#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t ;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll p;
        cin>>p;
        if(p%2 == 0)
        {
            cout<<(p/2)+1<<endl;
        }
        else
        {
            cout<<(p+1)/2<<endl;
        }
    }
    return 0;
}