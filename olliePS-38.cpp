#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll k , n , w;
    cin>>k>>n>>w;
    ll borrow = n - ((w*(w+1))/2)*k;
    if(borrow >= 0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<abs(borrow)<<endl;
    }
    return 0;
}