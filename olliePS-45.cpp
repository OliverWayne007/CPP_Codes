#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n , a;
        cin>>n>>a;
        if(a%2 == 0 && n>1)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else if(a%2 == 0 && n == 1)
        {
            cout<<"EVEN"<<endl;
        }
        else if(a%2 != 0 && n%2 == 0)
        {
            cout<<"EVEN"<<endl;
        }
        else if(a%2 != 0 && n%2 != 0)
        {
            cout<<"ODD"<<endl;
        }
    }
    return 0;
}