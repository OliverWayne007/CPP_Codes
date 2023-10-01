#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll T)
{
    ll n;
    cin >> n;
    if(n == 1 || n == 2 || n == 3)
    {
        cout << "Case #" << T << ": " << 1 << endl;
        return;
    }
    vector<int> v(n + 1 , -1);
    int b = 1 , j = n-1;
    v[b] = 0;
    b += 2;
    ll turn = 0;
    while(j - b >= 2)
    {
        if(turn % 2 == 0)
        {
            v[b] = 0;
            j -= 3;
        }
        if(turn % 2 == 1)
        {
            b += 2;
        }
        turn++;
    }
    ll cnt = 0;
    for(auto it : v)
    {
        if(it == 0)
        {
            cnt++;
        }
    }
    cout << "Case #" << T << ": " << cnt << endl;
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
      solution(t);
      t++;
   }
   return 0;
}