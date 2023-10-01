#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll value = 0;
    for(ll i = 1 ; i<=n ; i++)
    {
        string str;
        cin>>str;
        if(str == "X++" || str == "++X")
        {
            value++;
        }
        else if(str == "X--" || str == "--X")
        {
            value--;
        }
    }
    cout<<value<<endl;
    return 0;
}