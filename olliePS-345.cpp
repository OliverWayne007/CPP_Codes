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
    int n , k;
    cin >> n >> k;
    if(k % 4 == 0)
    {
        cout << "NO" << endl;
        return;
    }
    if(k % 2 == 0)
    {
        cout << "YES" << endl;
        int odd = 1 , even = 2;
        while(even <= n)
        {
            if((k + even) % 4 == 0)
            {
                cout << even << " " << odd << endl;
            }
            else
            {
                cout << odd << " " << even << endl;
            }
            odd += 2;
            even += 2;
        }
    }
    else
    {
        cout << "YES" << endl;
        int od = 1 , ev = 2;
        while(ev <= n)
        {
            cout << od << " " << ev << endl;
            od += 2;
            ev += 2;
        }
    }
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