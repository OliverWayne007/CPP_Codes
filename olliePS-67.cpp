#include<bits/stdc++.h>
using namespace std;
#define ll long long
// ANTI-PALINDROME CODECHEF
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n;
        string str;
        cin>>n>>str;
        if(n%2 != 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            unordered_map<char,int>mp;
            for(ll i = 0 ; i<n ; i++)
            {
                if(mp.find(str[i]) == mp.end())
                {
                    mp[str[i]] = 1;
                }
                else
                {
                    mp[str[i]]++;
                }
            }
            bool ap = true;
            for(ll i = 0 ; i<n ; i++)
            {
                if(mp[str[i]]>(n/2))
                {
                    ap = false;
                    break;
                }
            }
            if(ap == false)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                multimap<int , char>mmp;
                for(auto it : mp)
                {
                    mmp.insert({it.second , it.first});
                }
                string s = "";
                for(auto it : mmp)
                {
                    for(ll i = 1 ; i<=it.first ; i++)
                    {
                        s = s + (it.second);
                    }
                }
                reverse(s.begin()+n/2 , s.end());
                cout<<s<<endl;
            }
        }
    }
    return 0;
}