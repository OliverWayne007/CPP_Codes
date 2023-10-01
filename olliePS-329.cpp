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
    vector<ll> ans1 , ans2;
    ll sum1 = 0 , sum2 = 0;
    for(ll i = n ; i >= 1 ; i--)
    {
        if(sum1 <= sum2)
        {
            ans1.push_back(i);
            sum1 += i;
        }
        else
        {
            ans2.push_back(i);
            sum2 += i;
        }
    }
    for(auto it : ans1)
    {
        cout << it << " ";
    }
    reverse(ans2.begin() , ans2.end());
    for(auto it : ans2)
    {
        cout << it << " ";
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