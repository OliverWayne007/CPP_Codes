#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solution()
{
    string str;
    cin >> str;
    ll n = str.length();
    if(n % 2 == 0)
    {
        ll as = 0;
        for(char ch : str)
        {
            as += (ch - 'a') + 1;
        }
        cout << "Alice" << " " << as << endl;
        return;
    }
    if(str[0] >= str[n-1])
    {
        ll as = 0 , bs = (str[n-1] - 'a') + 1;
        for(ll i = 0 ; i < n-1 ; i++)
        {
            as += (str[i] - 'a') + 1;
        }
        if(as > bs)
        {
            cout << "Alice" << " " << (as - bs) << endl;
            return;
        }
        cout << "Bob" << " " << (bs - as) << endl;
        return;
    }
    ll as = 0 , bs = (str[0] - 'a') + 1;
    for(ll i = 1 ; i < n ; i++)
    {
        as += (str[i] - 'a') + 1;
    }
    if(as > bs)
    {
        cout << "Alice" << " " << (as - bs) << endl;
        return;
    }
    cout << "Bob" << " " << (bs - as) << endl;
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