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
    // Taking input
    ll n;
    cin >> n;
    vector<ll> b;
    for(ll i = 1 ; i < n ; i++)
    {
        ll x;
        cin >> x;
        b.push_back(x);
    }

    // For n = 2:
    if(n == 2)
    {
        cout << b[0] << " " << 0 << endl;
        return;
    }

    // Check if in descending order
    bool check = true;
    for(ll i = 0 ; i < n - 2 ; i++)
    {
        if(b[i] < b[i + 1])
        {
            check = false;
            break;
        }
    }
    if(check == true)
    {
        for(auto it : b)
        {
            cout << it << " ";
        }
        cout << 0 << endl;
        return;
    }

    // Check if in ascending order
    check = true;
    for(ll i = 0 ; i < n - 2 ; i++)
    {
        if(b[i] > b[i + 1])
        {
            check = false;
            break;
        }
    }
    if(check == true)
    {
        cout << 0 << " ";
        for(auto it : b)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    // If in niether ascending nor descending order
    check = true;
    vector<ll> ans;
    ans.push_back(b[0]);
    ll prev = b[0];
    for(ll i = 1 ; i < n - 1 ; i++)
    {
        if(b[i] > prev && check == true)
        {
            ans.push_back(0);
            ans.push_back(b[i]);
            prev = b[i];
            check = false;
        }
        else if(b[i] <= prev && check == true)
        {
            ans.push_back(b[i]);
            prev = b[i];
        }
        else if(b[i] < prev && check == false)
        {
            ans.pop_back();
            // ans.push_back(0);
            ans.push_back(b[i]);
            ans.push_back(b[i]);
            prev = b[i];
            // check = true;
        }
        else if(b[i] >= prev && check == false)
        {
            ans.push_back(b[i]);
            prev = b[i];
        }
    }
    for(auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
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