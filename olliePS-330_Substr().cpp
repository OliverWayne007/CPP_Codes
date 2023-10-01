#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution()
{
    string str = "OliverQueen";
    int n = str.length();
    string s = str.substr(0 , 1);
    cout << s.length() << endl;
    cout << s << endl;
    cout << str.substr(n-1) << endl;
    cout << str.substr(n) << endl;
    cout << str.substr(n+1) << endl;
}

/* Hello my name is arpit singh and iam not a terrorist !!! */

int main()
{
   flash();
   ll t = 1;
   while(t--)
   {
      solution();
   }
   return 0;
}