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

    ll start = 0 , end = n-1 , defect = -1;

    bool check1 = true , check2 = true;
    while(start <= end)
    {
        if(v[start] == v[end])
        {
            start++;
            end--;
            continue;
        }
        if(v[start] != v[end] && defect == -1)
        {
            defect = v[start];
            start++;
            continue;
        }
        if(v[start] != v[end] && defect != -1)
        {
            if(v[start] == defect && v[end] != defect)
            {
                start++;
                continue;
            }
            if(v[end] == defect && v[start] != defect)
            {
                end--;
                continue;
            }
            if(v[start] != defect && v[end] != defect)
            {
                check1 = false;
                break;
            }
        }
    }
    
    if(check1 == true)
    {
        cout << "YES" << endl;
        return;
    }

    start = 0 , end = n-1 , defect = -1;
    while(start <= end)
    {
        if(v[start] == v[end])
        {
            start++;
            end--;
            continue;
        }
        if(v[start] != v[end] && defect == -1)
        {
            defect = v[end];
            end--;
            continue;
        }
        if(v[start] != v[end] && defect != -1)
        {
            if(v[start] == defect && v[end] != defect)
            {
                start++;
                continue;
            }
            if(v[end] == defect && v[start] != defect)
            {
                end--;
                continue;
            }
            if(v[start] != defect && v[end] != defect)
            {
                check2 = false;
                break;
            }
        }
    }

    if(check2 == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
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