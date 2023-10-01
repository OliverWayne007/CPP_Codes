#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
    ll n , a , b;
    cin >> n >> a >> b;
    if(n == 1)
    {
        if(a == b)
        {
            cout << 1 << endl;
            cout << a << ":" << b << endl;
        }
        else
        {
            cout << 0 << endl;
            cout << a << ":" << b << endl; 
        }
        return;
    }
    if(a + b > n)
    {
        cout << 0 << endl;
        ll mn = min(a , b);
        if(mn == a)
        {
            if(mn >= n)
            {
                for(ll i = 1 ; i <= n ; i++)
                {
                    cout << 1 << ":" << 0 << endl;
                    a -= 1;
                }
                cout << a << ":" << b << endl;
            }
            else
            {
                for(ll i = 1 ; i <= mn ; i++)
                {
                    cout << 1 << ":" << 0 << endl;
                }
                for(ll i = 1 ; i < n - mn ; i++)
                {
                    cout << 0 << ":" << 1 << endl;
                    b -= 1;
                }
                cout << 0 << ":" << b << endl;
            }
        }
        else
        {
            if(mn >= n)
            {
                for(ll i = 1 ; i <= n ; i++)
                {
                    cout << 0 << ":" << 1 << endl;
                    b -= 1;
                }
                cout << a << ":" << b << endl;
            }
            else
            {
                for(ll i = 1 ; i <= mn ; i++)
                {
                    cout << 0 << ":" << 1 << endl;
                }
                for(ll i = 1 ; i < n - mn ; i++)
                {
                    cout << 1 << ":" << 0 << endl;
                    a -= 1;
                }
                cout << a << ":" << 0 << endl;
            }
        }
        return;
    }
    if(a + b <= n)
    {
        ll draw = n - (a + b);
        cout << draw << endl;
        for(ll i = 1 ; i <= a ; i++)
        {
            cout << 1 << ":" << 0 << endl;
        }
        for(ll i = 1 ; i <= b ; i++)
        {
            cout << 0 << ":" << 1 << endl;
        }
        for(ll i = 1 ; i <= draw ; i++)
        {
            cout << 0 << ":" << 0 << endl;
        }
        return;
    }
}

int main()
{
   flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}