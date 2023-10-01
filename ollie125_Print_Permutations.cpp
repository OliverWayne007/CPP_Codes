#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Print_Perm(vector<ll>& v , int size , vector<ll>& per , vector<ll>& taken)
{
    if(size == v.size())
    {
        for(auto it : per)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    for(ll idx = 0 ; idx < v.size() ; idx++)
    {
        if(taken[idx] == 1)
        {
            continue;
        }
        per.push_back(v[idx]);
        size++;
        taken[idx] = 1;
        Print_Perm(v , size , per , taken);
        taken[idx] = 0;
        size--;
        per.pop_back();
    }
    return;
}

void solution()
{
    ll n;
    cin >> n;
    vector<ll> v , per , taken(n , 0);
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    Print_Perm(v , 0 , per , taken);
}

int main()
{
   flash();
   ll t;
   cin >> t;
   while(t--)
   {
      solution();
      cout << endl;
   }
   return 0;
}