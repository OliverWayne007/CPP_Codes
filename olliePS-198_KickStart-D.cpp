#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

ll digitsum(ull n)
{
    ll sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n = n/10;
    }
    return sum;
}

ull digitproduct(ull n)
{
    ull prod = 1;
    while(n > 0)
    {
        prod *= n % 10;
        n = n/10;
    }
    return prod;
}

bool findzero(ull n)
{
    while(n > 0)
    {
        if(n % 10 == 0)
        {
            return true;
        }
        n = n/10;
    }
    return false;
}

bool findeven(ull n)
{
    while(n > 0)
    {
        if((n % 10) % 2 == 0)
        {
            return true;
        }
        n = n/10;
    }
    return false;
}

int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ull a , b;
        cin >> a >> b;
        ull cnt = 0;
        for(ull j = a ; j <= b ; j++)
        {
            ull ds = digitsum(j);
            if(findzero(j) == true)
            {
                cnt++;
            }
            else
            {
                if(findeven(j) == true)
                {
                    if(digitproduct(j) % ds == 0)
                    {
                        cnt++;
                    }
                }
                else
                {
                    if(ds % 2 == 0)
                    {
                        continue;
                    }
                    else
                    {
                        if(digitproduct(j) % ds == 0)
                        {
                            cnt++;
                        }
                    }
                 }
             }
        }
        cout << "Case #" << i << ": " << cnt << endl;
    }
    return 0;
}