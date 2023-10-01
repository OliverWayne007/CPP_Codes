#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

string removeDuplicates(string& s)
{
    int n = s.length();
    vector<int> vis(26 , 0);
    stack<char> st1 , st2;
    for(int i = 0 ; i < n ; i++)
    {
        if(vis[s[i] - 'a'] == 0)
        {
            vis[s[i] - 'a'] += 1;
            st1.push(s[i]);
        }
        else
        {
            if(st1.top() == s[i])
            {
                continue;
            }
            while(st1.top() != s[i])
            {
                st2.push(st1.top());
                st1.pop();
            }
            if(st2.top() < st1.top())
            {
                st1.pop();
                while(st2.empty() == false)
                {
                    st1.push(st2.top());
                    st2.pop();
                }
                st1.push(s[i]);
            }
            else
            {
                while(st2.empty() == false)
                {
                    st1.push(st2.top());
                    st2.pop();
                }
            }
        }
    }
    string ans = "";
    while(st1.empty() == false)
    {
        ans.push_back(st1.top());
        st1.pop();
    }
    reverse(ans.begin() , ans.end());
    return ans;
}

void Solution(ll T)
{
    string s;
    cin >> s;
    string ans = removeDuplicates(s);
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