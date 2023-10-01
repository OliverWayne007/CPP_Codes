#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll total_bills(ll n , ll sum)
{
    if(n == 0)
    {
        return sum;
    }
    else if(n>=100)
    {
        sum += n/100;
        return total_bills(n%100,sum);
    }
    else if(n>=20 && n<100)
    {
        sum += n/20;
        return total_bills(n%20,sum);
    }
    else if(n>=10 && n<20)
    {
        sum += n/10;
        return total_bills(n%10,sum);
    }
    else if(n>=5 && n<10)
    {
        sum += n/5;
        return total_bills(n%5,sum);
    }
    else
    {
        sum += n;
        return total_bills(0,sum);
    }
}

int main()
{
    flash();
    ll n;
    cin>>n;
    cout<<total_bills(n,0)<<endl;
    return 0;
}