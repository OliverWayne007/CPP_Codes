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
    ll n;
    cin >> n;
    string str1 , strn;
    cin >> str1 >> strn;
    ll cnt = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        if(strn[i] == '1')
        {
            if(i == 0)
            {
                if(str1[i] == '0')
                {
                    str1[i] = '2';
                    cnt++;
                }
                else
                {
                    if(str1[i + 1] == '1')
                    {
                        str1[i + 1] = '2';
                        cnt++;
                    }
                }
            }
            else if(i == n-1)
            {
                if(str1[i] == '0')
                {
                    str1[i] = '2';
                    cnt++;
                }
                else
                {
                    if(str1[i - 1] == '1')
                    {
                        str1[i - 1] = '2';
                        cnt++;
                    }
                }
            }
            else
            {
                if(str1[i] == '0')
                {
                    str1[i] = '2';
                    cnt++;
                }
                else if(str1[i - 1] == '1')
                {
                    str1[i - 1] = '2';
                    cnt++;
                }
                else
                {
                    if(str1[i + 1] == '1')
                    {
                        str1[i + 1] = '2';
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt << endl;
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