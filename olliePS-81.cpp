#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string str;
    cin>>str;
    char curr = 'a';
    int min_rot = 0;
    for(ll i = 0 ; i<str.length() ; i++)
    {
        if(str[i] == curr)
        {
            min_rot = min_rot + (curr-str[i]);
            curr = str[i];
        }
        else if(str[i]>curr)
        {
            min_rot = min_rot + min((curr-'a')+('z'-str[i])+1 , str[i]-curr);
            curr = str[i];
        }
        else
        {
            min_rot = min_rot + min(('z'-curr)+(str[i]-'a')+1 , curr-str[i]);
            curr = str[i];
        }
    }
    cout<<min_rot<<endl;
    return 0;
}