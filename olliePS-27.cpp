#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(int i = 1 ; i<=t ; i++)
    {
        ll n;
        cin>>n;
        unordered_set<ll>st;
        for(ll i = 1 ; (i*i)<=n ; i++)
        {
            st.insert(i*i);
            if(i*i*i<=n)
            {
                st.insert(i*i*i);
            }
        }
        cout<<st.size()<<endl;
    }
    return 0;
}