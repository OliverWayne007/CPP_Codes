#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n , m;
    cin>>n>>m;
    for(ll i = 1 ; i<=n ; i++)
    {
       if(i%2 != 0)
       {
           for(ll j = 1 ; j<=m ; j++)
           {
               cout<<"#";
           }
           cout<<endl;
       }
       else
       {
           if((i/2)%2 != 0)
           {
               for(ll i = 1 ; i<=m-1 ; i++)
               {
                   cout<<".";
               }
               cout<<"#"<<endl;
           }
           else if((i/2)%2 == 0)
           {
               cout<<"#";
               for(ll j = 2 ; j<=m ; j++)
               {
                   cout<<".";
               }
               cout<<endl;
           }
       }
    }
    return 0;
}