#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    int cnt = 0;
    while(n>0)
    {
        if(n%10 == 4 || n%10 == 7)
        {
            cnt++;
        }
        n = n/10;
    }
    if(cnt == 4 || cnt == 7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}