#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    string str;
    cin >> str;
    string s = "WUB" , as;
    ll i = 0;
    unordered_set<char> st;
    while(i < str.size())
    {
        if(str[i] == s[0] && str[i+1] == s[1] && str[i+2] == s[2])
        {
            st.insert(' ');
            i += 3;
        }
        else
        {
            if(st.empty() == true)
            {
                as.push_back(str[i]);
            }
            else
            {
                as.push_back(*st.begin());
                as.push_back(str[i]);
                st.clear();
            }

            i++;
        }
    }
    if(as[0] != ' ')
    {
        cout << as << endl;
    }
    else
    {
        reverse(as.begin() , as.end());
        as.pop_back();
        reverse(as.begin() , as.end());
        cout << as << endl;
    }
    return 0;
}