#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solution()
{
    string s;
    cin >> s;
    set<char> st;
    for(char ch : s)
    {
        st.insert(ch);
    }
    ll n = st.size();
    vector<int> arr(26 , 0);
    string str = "";
    for(ll i = 0 ; i < n ; i++)
    {
        str += s[i];
        arr[s[i] - 'a']++;
    }
    for(ll i = 0 ; i < 26 ; i++)
    {
        if(arr[i] > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    for(ll i = 0 ; i < s.size() ; i++)
    {
        if(s[i] != str[i % n])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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