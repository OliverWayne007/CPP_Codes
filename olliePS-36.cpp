#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    if(s[0]>='a')
    {
        s[0] = s[0] - 'a' + 'A';
        cout<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
    return 0;
}