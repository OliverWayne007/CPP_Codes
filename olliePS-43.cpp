#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll mini = INT_MIN;
        ll a1 , a2 , b1 , b2 , c1 , c2;
        cin>>a1>>a2;
        mini = max(mini , a1+a2);
        cin>>b1>>b2;
        mini = max(mini , b1+b2);
        cin>>c1>>c2;
        mini = max(mini , c1+c2);
        cout<<mini<<endl;
    }
    return 0;
}