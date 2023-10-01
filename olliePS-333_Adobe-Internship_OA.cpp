#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int Min_Cost(vector<vector<int>>& cost , int curr_pos , int prev_dig , vector<vector<int>>& dp)
{

    if(dp[curr_pos][prev_dig] != -1)
    {
        return dp[curr_pos][prev_dig];
    }
    
    if(curr_pos == 0)
    {
        int mnc = INT_MAX;
        for(int dig = 0 ; dig < 4 ; dig++)
        {
            if(dig == prev_dig)
            {
                continue;
            }
            mnc = min(mnc , cost[curr_pos][dig]);
        }
        int curr_cost = mnc;
        dp[curr_pos][prev_dig] = curr_cost;
        return curr_cost;
    }

    int min_cost = INT_MAX;

    for(int digit = 0 ; digit < 4 ; digit++)
    {
        if(digit == prev_dig)
        {
            continue;
        }
        int curr_cost = cost[curr_pos][digit];
        int poss_cost = curr_cost + Min_Cost(cost , curr_pos - 1 , digit , dp);
        min_cost = min(min_cost , poss_cost);
    }

    dp[curr_pos][prev_dig] = min_cost;
    return min_cost;

}

void solution()
{
    ll n;
    cin >> n;
    vector<vector<int>> cost(n , vector<int>(4 , 0));
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cin >> cost[i][j];
        }
    }
    vector<vector<int>> dp(n , vector<int>(5 , -1));
    int ans = Min_Cost(cost , n-1 , 4 , dp);
    cout << ans << endl;
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