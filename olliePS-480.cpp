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
    ll n , m;
    cin >> n >> m;
    if(n == m)
    {
        cout << "YES" << endl;
        return;
    }
    if(n % 3 != 0 || m > n)
    {
        cout << "NO" << endl;
        return;
    }
    set<ll> st;
    queue<ll> q;
    q.push(n);
    while(q.empty() == false)
    {
        ll ele = q.front();
        if(ele == m)
        {
            cout << "YES" << endl;
            return;
        }
        if(ele % 3 != 0)
        {
            st.insert(ele);
            q.pop();
            continue;
        }
        if(st.count(ele) == 0)
        {
            st.insert(ele);
            q.pop();
            q.push(ele/3);
            q.push(2 * (ele/3));
            continue;
        }
        q.pop();
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
      Solution(t);
      t++;        
   }
   return 0;
}