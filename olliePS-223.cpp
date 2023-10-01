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
    ll n , m;
    cin >> n >> m;
    string s , a;
    cin >> s >> a;
    if(n < m)
    {
        cout << -1 << endl;
        return;
    }
    ll i = 0 , j = 0;
    while(j < n && i < m)
    {
        if(s[j] != a[i])
        {
            if(s[j] == '?')
            {
                if(a[i] == 'e')
                {
                    s[j] = 'a';
                }
                else
                {
                    s[j] = (char)(a[i]+1);
                }
            }
            j++;
        }
        else
        {
            j++;
            i++;
        }
    }
    if(i == m)
    {
        cout << -1 << endl;
        return;
    }
    cout << s << endl;
    return;
}

int main()
{
   flash();
   ll t;
   cin >> t;
   while(t--)
   {
      solution();
   }
   return 0;
}