#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

string rev_str(string os)
{
    string rs = os;
    reverse(rs.begin() , rs.end());
    return rs;
}

void possible_strings(string str , int k , int ind , unordered_set<string>& st)
{
    if(ind > k)
    {
        st.insert(str);
        return;
    }
    string os = str;
    string rs = rev_str(os);
    possible_strings(os + rs , k , ind+1 , st);
    if((rs + os) == (os + rs))
    {
        return;
    }
    possible_strings(rs + os , k , ind+1 , st);
}

void solution()
{
    ll n , k;
    cin >> n >> k;
    string str;
    cin >> str;
    unordered_set<string> st;
    possible_strings(str , k , 1 , st);
    cout << st.size() << endl;
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