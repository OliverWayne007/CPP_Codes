#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

string removeDuplicateLetters(string& s)
{
    int n = s.size();
    vector<bool> seen(26 , false);
    vector<int> lastIndex(26 , -1);
    stack<char> st;
    for(int i = 0 ; i < n ; i++)
    {
        lastIndex[s[i] - 'a'] = i;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(seen[s[i] - 'a'] == false)
        {
            st.push(s[i]);
            seen[s[i] - 'a'] = true;
        }
        else
        {

        }
    }
}

void Solution(ll T)
{
    string s;
    cin >> s;
    string ans = removeDuplicateLetters(s);
    cout << ans << endl;
    return;
}

int main()
{
   //flash();
   ll tc = 1;
   //cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}