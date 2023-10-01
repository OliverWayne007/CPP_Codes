#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll mini = INT_MAX;
    ll maxi = INT_MIN;
    for(int i = 1 ; i<=3 ; i++)
    {
        ll x;
        cin>>x;
        maxi = max(maxi , x);
        mini = min(mini , x);
    }
    cout<<(maxi-mini)<<endl;
    return 0;
}