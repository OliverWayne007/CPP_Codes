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
    if(n <= 9)
    {
        cout << n << endl;
        return;
    }
    int x = 9;
    vector<int> v;
    while(n >= x && n > 0)
    {
        v.push_back(x);
        n -= x;
        x--;
    }
    if(n != 0)
    {
        v.push_back(n);
    }
    reverse(v.begin() , v.end());
    for(auto it : v)
    {
        cout << it;
    }
    cout << endl;
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