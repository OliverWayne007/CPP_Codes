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
    ll x1 , y1 , x2 , y2 , x3 , y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if(y1 > y2 && y1 < y3 || y1 > y3 && y1 < y2)
    {
        cout << "YES" << endl;
        return;
    }
    if(y2 > y1 && y2 < y3 || y2 > y3 && y2 < y1)
    {
        cout << "YES" << endl;
        return;
    }
    if(y3 > y2 && y3 < y1 || y3 > y1 && y3 < y2)
    {
        cout << "YES" << endl;
        return;
    }
    if(x1 > x2 && x1 < x3 || x1 > x3 && x1 < x2)
    {
        cout << "YES" << endl;
        return;
    }
    if(x2 > x1 && x2 < x3 || x2 > x3 && x2 < x1)
    {
        cout << "YES" << endl;
        return;
    }
    if(x3 > x2 && x3 < x1 || x3 > x1 && x3 < x2)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
      cout << endl;
      Solution(t);
      t++;        
   }
   return 0;
}