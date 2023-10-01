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
    ll q;
    cin >> q;
    map<char , ll> mps , mpt;
    mps['a']++;
    mpt['a']++;
    for(ll i = 1 ; i <= q ; i++)
    {
        ll d , k;
        string str;
        cin >> d >> k >> str;
        if(d == 1)
        {
            for(auto it : str)
            {
                mps[it] += k;
            }
        }
        else
        {
            for(auto it : str)
            {
                mpt[it] += k;
            }
        }
        if(mps.size() == 1 && mpt.size() == 1)
        {
            if(mps['a'] >= mpt['a'])
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else if(mps.size() == 1 && mpt.size() > 1)
        {
            cout << "YES" << endl;
        }
        else if(mps.size() > 1 && mpt.size() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
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