#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

ll Find_Occurrences(string text , string name)
{
    ll n = text.size() , m = name.size();
    if(m > n)
    {
        return 0;
    }
    ll answer = 0;
    ll idx = 0;
    while(idx <= n - m)
    {
        if(text[idx] != name[0])
        {
            idx++;
            continue;
        }
        bool check = true;
        for(ll i = 0 ; i < m ; i++)
        {
            if(text[idx] != name[i])
            {
                check = false;
                break;
            }
            else
            {
                idx++;
            }
        }
        if(check == true)
        {
            answer++;
        }
    }
    return answer;
}

void Solution(ll T)
{
    string text , name;
    cin >> text;
    cin >> name;

    ll ans = Find_Occurrences(text , name);
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