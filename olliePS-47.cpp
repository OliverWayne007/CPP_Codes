#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n;
        cin>>n;
        if(n == 1)
        {
            cout<<"no"<<endl;
        }
        else if(n == 2)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            bool check = true;
            for(ll i = 2 ; i<n ; i++)
            {
                if(n%i == 0)
                {
                    check = false;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if(check == true)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}