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
    string str;
    cin >> str;
    ll n = str.length();
    if(n == 3)
    {
        cout << str[0] << " " << str[1] << " " << str[2] << endl;
        return;
    }
    if(str[0] == 'a' && str[n - 1] == 'a')
    {
        cout << 'a' << " ";
        for(ll i = 1 ; i < n - 1 ; i++)
        {
            cout << str[i];
        }
        cout << " " << 'a' << endl;
        return;
    }
    string a = "" , b = "" , c = "";
    if(str[0] == 'b' && str[n - 1] == 'b')
    {
        for(ll i = 0 ; i < n/2 ; i++)
        {
            a.push_back(str[i]);
        }
        for(ll i = n/2 + 1 ; i < n ; i++)
        {
            c.push_back(str[i]);
        }
        b.push_back(str[n/2]);
        cout << a << " " << b << " " << c << endl;
        return;
    }
    if(str[0] == 'a' && str[n - 1] == 'b')
    {
        ll idx = -1;
        for(int i = 1 ; i <= n - 3 ; i++)
        {
            if(str[i] == 'b')
            {
                idx = i;
                break;
            }
        }
        if(idx != -1)
        {
            for(ll i = 0 ; i < idx ; i++)
            {
                a.push_back(str[i]);
            }
            for(ll i = idx ; i < n - 1 ; i++)
            {
                b.push_back(str[i]);
            }
            c.push_back(str[n - 1]);
        }
        else
        {
            for(ll i = 0 ; i < n - 3 ; i++)
            {
                a.push_back(str[i]);
            }
            if(str[n - 2] == 'b')
            {
                c.push_back(str[n - 1]);
                c.push_back(str[n - 2]);
                b.push_back(str[n - 3]);
            }
            else
            {
                a.push_back(str[n - 3]);
                b.push_back(str[n - 2]);
                c.push_back(str[n - 1]);
            }
        }
        cout << a << " " << b << " " << c << endl;
        return;
    }
    if(str[0] == 'b' && str[n - 1] == 'a')
    {
        ll idx = -1;
        for(int i = 1 ; i <= n - 3 ; i++)
        {
            if(str[i] == 'a')
            {
                idx = i;
                break;
            }
        }
        if(idx != -1)
        {
            for(ll i = 0 ; i < idx ; i++)
            {
                a.push_back(str[i]);
            }
            for(ll i = idx + 1 ; i < n  ; i++)
            {
                c.push_back(str[i]);
            }
            b.push_back(str[idx]);
        }
        else
        {
            a.push_back(str[0]);
            for(ll i = 1 ; i < n - 1 ; i++)
            {
                b.push_back(str[i]);
            }
            c.push_back(str[n - 1]);
        }
        cout << a << " " << b << " " << c << endl;
        return;
    }
}

int main()
{
   flash();
   ll tc;
   cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}