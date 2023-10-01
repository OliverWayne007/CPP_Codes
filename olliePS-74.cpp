#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        ll cnt = 0;
        char c = '9';
        if(((c-str[0])+1)>k && str[0] != '0')
        {
            cout<<0<<endl;
        }
        else if(((c-str[0])+1)>k && str[0] == '0')
        {
            for(ll i = 0 ; i<n ; i++)
            {
                if(str[i] == '0')
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            cout<<cnt<<endl;
        }
        else if(((c-str[0])+1)<=k)
        {
            ll temp = k , ct = 0 , max_rep = 1 , j = 0;
            char d = '0';
            while(max_rep>=0 && j<n)
            {
                max_rep = (((str[j]-d)+temp)/10)*10 - (str[j]-d);
                if(max_rep>=0)
                {
                    ct++;
                }
                temp = max_rep;
                j++;
            }
            cout<<ct<<endl;
        }
    }
    return 0;
}