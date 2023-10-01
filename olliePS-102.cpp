#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str , s;
    cin>>str>>s;
    reverse(str.begin(),str.end());
    if(str == s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}