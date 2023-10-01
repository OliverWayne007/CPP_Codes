#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// MONEY HEIST-5
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n;
        cin>>n;
        pair<int,int> arr[n];
        for(ll i = 0 ; i<n ; i++)
        {
            pair<int,int> p;
            cin>>p.first>>p.second;
            arr[i] = p;
        }
        ll a , b;
        cin>>a>>b;
        bool check = true;
        for(ll i = 0 ; i<n ; i++)
        {
            ll diff1 = arr[i].first - a;
            ll diff2 = arr[i].second - b;

            // diff1 = abs(diff1);
            // diff2 = abs(diff2);

            if(diff1<0)
            {
                diff1 = -diff1;
            }
            if(diff2<0)
            {
                diff2 = -diff2;
            }

            if((diff1 + diff2)<=(abs(a)+abs(b)))
            {
                check = false;
                break;
            }
            else
            {
                continue;
            }

            // if(a<0)
            // {
            //     a = -a;
            // }
            // if(b<0)
            // {
            //     b = -b;
            // }

            // if((diff1 + diff2)<=(a+b))
            // {
            //     check = false;
            //     break;
            // }

        }

        if(check == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}