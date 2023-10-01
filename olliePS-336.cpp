#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int Min_Jumps(string str , int d , int src , int dest , vector<int>& dp)
{
    if(str[src] == '0' || src > dest)
    {
        return -1;
    }
    if(src == dest)
    {
        return 0;
    }
    if(dp[src] != -2)
    {
        return dp[src];
    }
    int min_jumps = INT_MAX;
    for(int i = 1 ; i <= d ; i++)
    {
        int jumps = 1 + Min_Jumps(str , d , src + i , dest , dp);
        if(jumps == 0)
        {
            continue;
        }
        else
        {
            min_jumps = min(min_jumps , jumps);
        }
    }
    if(min_jumps == INT_MAX)
    {
        dp[src] = -1;
        return dp[src];
    }
    return dp[src] = min_jumps;
}

void solution()
{
    int n , d;
    cin >> n >> d;
    string str;
    cin >> str;
    vector<int> dp(n , -2);
    int ans = Min_Jumps(str , d , 0 , n-1 , dp);
    cout << ans << endl;
    return;
}

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