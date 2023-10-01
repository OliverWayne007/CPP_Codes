#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        int n;
        cin>>n;
        ll num = n;
        ll count = -1;
        set<ll>s;
        while(num>0)
        {
            ll rem = num%10;
            count++;
            num = num/10;
            if(rem==0)
            {
                continue;
            }
            else if(rem != 0)
            {
                s.insert(rem*pow(10,count));
            }
        }
        cout<<s.size()<<endl;
        for(auto it:s)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}