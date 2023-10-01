#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

string removeDuplicateLetters(string& s) {
    int n = s.length();
    stack<char> st1 , st2 , st3;
    vector<int> freq(26 , 0);
    for(int i = 0 ; i < n ; i++)
    {
        freq[s[i] - 'a'] += 1;
        st1.push(s[i]);
    }
    while(st1.empty() == false)
    {
        if(freq[st1.top() - 'a'] == 1)
        {
            st2.push(st1.top());
            st1.pop();
        }
        else
        {
            while(freq[st1.top() - 'a'] > 1)
            {
                st2.push(st1.top());
                st1.pop();
                if(st1.top() == st2.top())
                {
                    freq[st2.top() - 'a'] -= 1;
                    st2.pop();
                }
                else
                {
                    while(st1.top() != st2.top())
                    {
                        st3.push(st1.top());
                        st1.pop();
                    }
                    if(st3.top() <= st1.top())
                    {
                        freq[st1.top() - 'a'] -= 1;
                        st1.pop();
                        while(st3.empty() == false)
                        {
                            st1.push(st3.top());
                            st3.pop();
                        }
                        st1.push(st2.top());
                        st2.pop();
                    }
                    else
                    {
                        freq[st2.top() - 'a'] -= 1;
                        st2.pop();
                        while(st3.empty() == false)
                        {
                            st1.push(st3.top());
                            st3.pop();
                        }
                    }
                }
            }
        }
    }
    string ans = "";
    while(st2.empty() == false)
    {
        ans.push_back(st2.top());
        st2.pop();
    }
    return ans;
}

void Solution(ll T)
{
    string s;
    cin >> s;
    string ans = removeDuplicateLetters(s);
    cout << ans << endl;
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