#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    unordered_map<string , int>mp;
    for(ll i = 1 ; i<=n ; i++)
    {
        string str;
        cin>>str;
        if(mp.find(str) == mp.end())
        {
            mp[str] = 1;
            cout<<"OK"<<endl;
        }
        else
        {
            string cvt = to_string(mp[str]);
            string s = str + cvt;
            cout<<s<<endl;
            mp.insert({s,1});
            mp[str]++;
        }
    }
    return 0;
}