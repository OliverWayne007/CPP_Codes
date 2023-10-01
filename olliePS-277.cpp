#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll test_case)
{
    ll n , x , y;
    cin >> n >> x >> y;
    ll sum = (n * (n + 1))/2;
    if(sum % (x + y) != 0)
    {
        cout << "Case #" << test_case << ": " << "IMPOSSIBLE" << endl;
        return;
    }
    else
    {
        ll fac = sum/(x + y);
        ll alan_sum = fac * x;
        cout << "Case #" << test_case << ": " << "POSSIBLE" << endl;
        ll num = n;
        set<ll> st;
        while(alan_sum >= num && alan_sum > 0)
        {
            alan_sum -= num;
            st.insert(num);
            num--;
        }
        if(alan_sum > 0)
        {
            st.insert(alan_sum);
        }
        cout << st.size() << endl;
        for(auto it : st)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
}

int main()
{
   flash();
   ll t;
   cin >> t;
   for(ll k = 1 ; k <= t ; k++)
   {
       solution(k);
   }
   return 0;
}