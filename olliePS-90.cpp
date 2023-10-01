#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    ll ec = 0 , oc = 0;
    if(n%2 == 0)
    {
        ec = oc = n/2;
    }
    else
    {
        ec = n/2;
        oc = n-ec;
    }
    if(k<=oc)
    {
        cout<<(2*k-1)<<endl;
    }
    else
    {
        cout<<(k-oc)*2<<endl;
    }
    return 0;
}