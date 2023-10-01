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
    ll n , m , k;
    cin >> n >> m >> k;
    string a , b;
    cin >> a >> b;
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    ll cnta = 0 , cntb = 0 , i = 0 , j = 0;
    string ans = "";
    while(i < n && j < m)
    {
        if(a[i] <= b[j])
        {
            if(cnta < k)
            {
                ans += a[i];
                cnta++;
                cntb = 0;
                i++;
            }
            else
            {
                ans += b[j];
                cntb++;
                cnta = 0;
                j++;
            }
        }
        else
        {
            if(cntb < k)
            {
                ans += b[j];
                cntb++;
                cnta = 0;
                j++;
            }
            else
            {
                ans += a[i];
                cntb = 0;
                cnta++;
                i++;
            }
        }
    }
    cout << ans << endl;
    return;
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