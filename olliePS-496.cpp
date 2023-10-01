#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Find the Smallest multiple X of a given number N made of digits 0 and 9 only. 
// Note that X does not exceed 1e6

ll Find_Smallest_Multiple(ll N , ll mul)
{
    if(mul > 1e6)
    {
        return INT_MAX;
    }
    if(mul % N == 0)
    {
        return mul;
    }
    ll opt1 = mul * 10 , opt2 = mul * 10 + 9;
    ll x = Find_Smallest_Multiple(N , opt1);
    ll y = Find_Smallest_Multiple(N , opt2);
    ll ans = min(x , y);
    return ans;
}

void Solution(ll T)
{
    ll N;
    cin >> N;
    ll ans = Find_Smallest_Multiple(N , 9);
    cout << ans << endl;
    return;
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