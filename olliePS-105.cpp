#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a+b+c == 3)
    {
        cout<<3<<endl;
    }
    else if(a == 1 && b>1 && c>1)
    {
        cout<<(a+b)*c<<endl;
    }
    else if(a>1 && b == 1 && c>1)
    {
        cout<<max((a+b)*c , a*(b+c))<<endl;
    }
    else if(a>1 && b>1 && c == 1)
    {
        cout<<(b+c)*a<<endl;
    }
    else if(a == 1 && b == 1 && c>1)
    {
        cout<<(a+b)*c<<endl;
    }
    else if(a == 1 && b>1 && c == 1)
    {
        cout<<(a+b+c)<<endl;
    }
    else if(a>1 && b == 1 && c == 1)
    {
        cout<<a*(b+c)<<endl;
    }
    else
    {
        cout<<(a*b*c)<<endl;
    }
    return 0;
}