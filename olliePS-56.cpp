#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    int count = 1;
    vector<string>v;
    for(ll i = 1 ; i<=n ; i++)
    {
        string str;
        cin>>str;
        if(v.size() == 0)
        {
            v.push_back(str);
        }
        else
        {
            if(v[v.size()-1][str.length()-1] == str[0])
            {
                count++;
                v.push_back(str);
            }
            else
            {
                v.push_back(str);
            }
        }
    }
    cout<<count<<endl;
    return 0;
}