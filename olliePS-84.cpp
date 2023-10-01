#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    int ct1 = 0 , ct2 = 0 , ct3 = 0 , mini = INT_MAX;
    vector<int>v1,v2,v3;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin>>x;
        if(x == 1)
        {
            ct1++;
            v1.push_back(i);
        }
        else if(x == 2)
        {
            ct2++;
            v2.push_back(i);
        }
        else
        {
            ct3++;
            v3.push_back(i);
        }
    }
    mini = min(ct1,mini);
    mini = min(mini,ct2);
    mini = min(mini,ct3);
    cout<<mini<<endl;
    if(mini != 0)
    {
        for(int i1 = 0 , i2 = 0 , i3 = 0 ; i3<mini ; i3++)
        {
            cout<<v1[i1]<<" "<<v2[i2]<<" "<<v3[i3]<<endl;
            i1++ , i2++;
        }
    }

    return 0;
}