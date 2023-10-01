#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    string s = "";
    for(ll i = 0 ; i<n ; i++)
    {
        char x;
        cin>>x;
        s = s + x;
    }
    int count = 0;
    ll start = 0 , end = 1;
    while(end<n)
    {
        if(s[start] != s[end])
        {
            start = end;
            end++;
            continue;
        }
        else
        {
            count++;
            end++;
        }
    }
    cout<<count<<endl;
    return 0;
}