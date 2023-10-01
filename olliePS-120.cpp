#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    string s , str;
    cin >> s >> str;
    for(ll i = 0 ; i < str.length() ; i++)
    {
        if(str[i] == s[i])
        {
            cout << 0 ;
        }
        else
        {
            cout << 1 ;
        }
    }
    return 0;
}