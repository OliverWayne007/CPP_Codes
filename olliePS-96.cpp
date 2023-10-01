#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    double n,l;
    cin>>n>>l;
    vector<double>v;
    for(ll i = 1 ; i<=n ; i++)
    {
        double x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin() , v.end());
    double maxi = 0;
    for(ll i = 0 ; i<n-1 ; i++)
    {
        double diff = v[i+1]-v[i];
        maxi = max(maxi,diff);
    }
    double dec = maxi/2;
    if(v[0] == 0 && v[n-1] == l)
    {
        cout<<fixed<<setprecision(10)<<dec<<endl;   
    }
    else if(v[0] != 0 && v[n-1] != l)
    {
        double mx = max(v[0],l-v[n-1]);
        dec = max(dec,mx);
        cout<<fixed<<setprecision(10)<<dec<<endl;
    }
    else if(v[0] != 0 && v[n-1] == l)
    {
        dec = max(dec,v[0]);
        cout<<fixed<<setprecision(10)<<dec<<endl;
    }
    else if(v[0] == 0 && v[n-1] != l)
    {
        dec = max(dec,l-v[n-1]);
        cout<<fixed<<setprecision(10)<<dec<<endl;
    }
    return 0;
}