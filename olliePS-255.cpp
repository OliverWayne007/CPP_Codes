#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution()
{
    ll n , q;
    cin >> n >> q;
    string str;
    cin >> str;
    ll cnt = 0;
    for(ll i = 0 ; i < n-2 ; i++)
    {
        if(str[i] == 'a' && str[i+1] == 'b' && str[i+2] == 'c')
        {
            cnt++;
        }
    }
    for(ll i = 1 ; i <= q ; i++)
    {
        ll id;
        cin >> id;
        char ch;
        cin >> ch;
        ll idx = id - 1;
        if(n < 3)
        {
            cout << 0 << endl;
            continue;
        }
        if(ch == 'a')
        {
            if(str[idx] == 'b')
            {
                if(idx < n-1 && idx >= 1 && str[idx+1] == 'c' && str[idx-1] == 'a')
                {
                    cnt--;
                }
                else if(idx < n-2 && str[idx+1] == 'b' && str[idx+2] == 'c')
                {
                    cnt++;
                }
                str[idx] = ch;
            }
            else if(str[idx] == 'c')
            {
                if(idx < n && idx >= 2 && str[idx-1] == 'b' && str[idx-2] == 'a')
                {
                    cnt--;
                }
                else if(idx < n-2 && str[idx+1] == 'b' && str[idx+2] == 'c')
                {
                    cnt++;
                }
                str[idx] = ch;
            }
        }
        else if(ch == 'b')
        {
            if(str[idx] == 'a')
            {
                if(idx < n-2 && str[idx+1] == 'b' && str[idx+2] == 'c')
                {
                    cnt--;
                }
                else if(idx < n-1 && idx >= 1 && str[idx+1] == 'c' && str[idx-1] == 'a')
                {
                    cnt++;
                }
                str[idx] = ch;
            }
            else if(str[idx] == 'c')
            {
                if(idx < n && idx >= 2 && str[idx-1] == 'b' && str[idx-2] == 'a')
                {
                    cnt--;
                }
                else if(idx < n-1 && idx >= 1 && str[idx+1] == 'c' && str[idx-1] == 'a')
                {
                    cnt++;
                }
                str[idx] = ch;
            }
        }
        else
        {
            if(str[idx] == 'a')
            {
                if(idx < n-2 && str[idx+1] == 'b' && str[idx+2] == 'c')
                {
                    cnt--;
                }
                else if(idx < n && str[idx-1] == 'b' && str[idx-2] == 'a')
                {
                    cnt++;
                }
                str[idx] = ch;
            }
            else if(str[idx] == 'b')
            {
                if(idx < n-1 && idx >= 1 && str[idx+1] == 'c' && str[idx-1] == 'a')
                {
                    cnt--;
                }
                else if(idx < n && idx >= 2 && str[idx-1] == 'b' && str[idx-2] == 'a')
                {
                    cnt++;
                }
                str[idx] = ch;
            }
        }
        cout << cnt << endl;
    }
    return;
}

int main()
{
   flash();
   ll t = 1;
   while(t--)
   {
      solution();
   }
   return 0;
}