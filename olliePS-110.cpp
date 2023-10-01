#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    ll n;
    cin>>n;
    if(n == 1)
    {
        cout<<"I hate it"<<endl;
    }
    else
    {
        for(ll i = 1 ; i<=n-1 ; i++)
        {
            if(i%2 != 0)
            {
                cout<<"I hate that ";
            }
            else
            {
                cout<<"I love that ";
            }
        }
        if(n%2 == 0)
        {
            cout<<"I love it"<<endl;
        }
        else
        {
            cout<<"I hate it"<<endl;
        }
    }
    return 0;
}