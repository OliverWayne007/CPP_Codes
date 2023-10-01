#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        int rem = abs(n)%10;
        cout<<max(n/10 , (n/100)*10-rem)<<endl;
    }
    return 0;
}