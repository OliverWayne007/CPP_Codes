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
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll idx = n - 1;
    while(idx > 0)
    {
        if(v[idx] >= v[idx - 1])
        {
            idx--;
        }
        else
        {
            break;
        }
    }
    set<ll> st1 , st2;
    ll ans = 0;
    for(ll i = 0 ; i < idx ; i++)
    {
        st1.insert(v[i]);
    }
    ans += st1.size();
    ll index = n - 1;
    bool check = false;
    while(index >= idx)
    {
        if(!st1.count(v[index]) && check == false)
        {
            index--;
        }
        else if(!st1.count(v[index]) && check == true)
        {
            st2.insert(v[index]);
            index--;
        }
        else if(st1.count(v[index]) && check == false)
        {
            check = true;
            index--;
        }
        else
        {
            index--;
        }
    }
    ans += st2.size();
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