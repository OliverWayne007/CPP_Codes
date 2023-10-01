#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool checkIflucky(int n)
{
    bool check = true;
    while(n>0)
    {
        if(n%10 != 7 && n%10 != 4)
        {
            check = false;
            return check;
        }

        n = n/10;
    }

    return check;
}

int main()
{
    ll n;
    cin>>n;
    if(checkIflucky(n) == true)
    {
        cout<<"YES"<<endl;
    }
    else{
    bool Almostlucky = false;
    for(ll i = 2 ; i*i<=n ; i++)
    {
        if(n%i != 0)
        {
            continue;
        }
        else
        {
            if(checkIflucky(i) == true || checkIflucky(n/i) == true)
            {
                Almostlucky = true;
                break;
            }
        }
    }
    if(Almostlucky == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}