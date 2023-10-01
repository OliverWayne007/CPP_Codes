#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll score = 0;
        ll n , k;
        cin>>n>>k;
        int m = n-(2*k);
        vector<ll>v;
        vector<ll> :: iterator it;
        for(ll i = 0 ; i<n ; i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        
        if(k==0)
        {
            for(ll i = 0 ; i<n ; i++)
            {
              score = score + v[i];
            }
            cout<<score<<endl;
        }
 
        else
        {
        sort(v.begin() , v.end());
        for(ll i = 0 ; i<m ; i++)
        {
            score = score + v[i];
        }
        int i = m , j = m+1;
        while(j<=(v.size()-1) && j>i)
        {
            if(i<=(v.size()-2) && j==(v.size()-1) && v[i]==v[j])
            {
                score = score + v[i]/v[j];
                it = v.begin()+j;
                j--;
                v.erase(it);
                i++;
            }
            else if(v[i]<v[j] && j==(i+1))
            {
                score = score + v[i]/v[j];
                i=i+2;
                j=j+2;
            }
            else if(v[i]<v[j] && j>(i+1))
            {
                score = score + v[i]/v[j];
                i++;
                it = v.begin()+j;
                j = i+1;
                v.erase(it);
            }
            else if(v[i] == v[j])
            {
                j++;
                it = v.begin()+j;
            }
        }
        cout<<score<<endl;
 
        }
 
    }
    return 0;
}