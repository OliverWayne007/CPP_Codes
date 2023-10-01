#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,q;
    cin>>n>>m>>q;
    char arr[n+1][m+1];
    for(ll i = 1 ; i<=n ; i++)
    {
        for(ll j = 1 ; j<=m ; j++)
        {
            arr[i][j] = '.';
        }
    }
    for(ll i = 1 ; i<=q ; i++)
    {
        ll r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        char ch;
        cin>>ch;
        for(ll a = r1 ; a<=r2 ; a++)
        {
            for(ll b = c1 ; b<=c2 ; b++)
            {
                arr[a][b] = ch;
            }
        }
    }
    for(ll i = 1 ; i<=n ; i++)
    {
        for(ll j = 1 ; j<=m ; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return  0;
}