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
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    if(n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if(n == 2)
    {
        if(v[0] == v[1])
        {
            cout << 2 << endl;
            return;
        }
        else
        {
            cout << 0 << endl;
            return;
        }
    }
    ll left = 0 , right = n-1 , ls = 0 , rs = 0 , lidx = -1 , ridx = n;
    while(left <= right)
    {
        if(left == 0 && right == n-1)
        {
            ls += v[left];
            rs += v[right];
            left++;
            right--;
            continue;
        }
        if(ls == rs)
        {
            lidx = left-1;
            ridx = right+1;
            ls += v[left];
            rs += v[right];
            left++;
            right--; 
            continue;
        }
        if(ls < rs)
        {
            ls += v[left];
            left++;
            continue;
        }
        if(ls > rs)
        {
            rs += v[right];
            right--;
            continue;
        }
    }
    if(ls == rs && left - right == 1)
    {
        lidx = left - 1;
        ridx = right + 1;
    }
    if(lidx == -1 && ridx == n)
    {
        cout << 0 << endl;
        return;
    }
    cout << lidx + 1 + (n - ridx) << endl;
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