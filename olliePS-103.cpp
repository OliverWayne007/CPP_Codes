#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll ac = 0 , dc = 0;
    for(ll i = 0 ; i<n ; i++)
    {
        if(str[i] == 'A')
        {
            ac++;
        }
        else
        {
            dc++;
        }
    }
    if(ac == dc)
    {
        cout<<"Friendship"<<endl;
    }
    else if(ac>dc)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }
    return 0;
}