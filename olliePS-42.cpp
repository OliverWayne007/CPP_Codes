#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    bool check = true;
    for(ll i = 0 ; i<s.length() ; i++)
    {
        if(s[i] == '0' && check == true)
        {
            check = false;
            continue;
        }
        else if(s[i] == '1' && check == true && i == s.length()-1)
        {
            continue;
        }
        else
        {
            cout<<s[i];
        }
    }
    return 0;
}