#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
// A JOURNEY THROUGH FOREST
int main()
{
    ll n , c;
    cin>>n>>c;
    vector<ll>v;
    set<ll>s;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll wi;
        cin>>wi;
        v.push_back(wi);
    }
    for(ll i = 0 ; i<v.size() ; i++)
    {
        ll count = 0;
        ll sum = 0;
        if(v[i]>c)
        {
            continue;
        }
        else if(v[i]==c)
        {
            count++;
            s.insert(count);
            continue;
        }
        else if(v[i]<c)
        {
            count++;
            sum = sum + v[i];
            if(i == v.size()-1)
            {
                s.insert(count);
                break;
            }
            else
            {
                for(ll j = i+1 ; j<v.size() ; j++)
                {
                    int diff = c-sum;
                    if(diff == 0)
                    {
                        break;
                    }
                    else if(diff<v[j] && j==v.size()-1)
                    {
                        s.insert(count);
                        break;
                    }
                    else if(diff == v[j])
                    {
                        count++;
                        s.insert(count);
                        sum = sum + v[j];
                        continue;
                    }
                    else if(diff<v[j] && j<v.size()-1)
                    {
                        continue;
                    }
                    else if(diff>v[j])
                    {
                        count++;
                        sum = sum + v[j];
                        if((c-sum)>0 && j==v.size()-1)
                        {
                            s.insert(count);
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
        }
    }
    auto it = s.rbegin();
    cout<<(*it)<<endl;
    return 0;
}