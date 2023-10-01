#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    if((double)a<=(double)(b/m))
    {
        cout<<(n*a)<<endl;
    }
    else
    {
        if(n%m == 0)
        {
            cout<<(n/m)*b<<endl;
        }
        else if(b>a && (n%m)*a<=b)
        {
            cout<<(n/m)*b + a*(n%m)<<endl;
        }
        else if(b>a && (n%m)*a>b)
        {
            cout<<(n/m)*b + b<<endl;
        }
        else if(b<=a)
        {
            cout<<(n/m)*b + b<<endl;
        }
    }
    return 0;
}