#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str;
    cin>>str;
    string s = "";
    for(ll i = 0 ; i<str.length() ; i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
        {
            continue;
        }
        else
        {
            s = s + str[i];
        }
    }
    for(ll i = 0 ; i<s.length() ; i++)
    {
        if(s[i]-'a'<0)
        {
            s[i] = (s[i]-'A')+'a';
        }
        cout<<"."<<s[i];
    }
    return 0;
}