#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int countTeams(vector<int>& skillLevels , int minPlayers , int minLevel , int maxLevel)
{
    int n = skillLevels.size();
    sort(skillLevels.begin() , skillLevels.end());
    int minid = -1 , maxid = -1;
    for(int i = 0 ; i < n ; i++)
    {
        if(skillLevels[i] >= minLevel)
        {
            minid = i;
            break;
        }
    }
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        if(skillLevels[i] <= maxLevel)
        {
            maxid = i;
            break;
        }
    }
    if(minid == -1 || maxid == -1)
    {
        return 0;
    }
    int availablePlayers = maxid - minid + 1;
    // cout << availablePlayers << endl;
    if(availablePlayers < minPlayers)
    {
        return 0;
    }
    if(availablePlayers == minPlayers)
    {
        return 1;
    }
    int sum = 0;
    int min_players = minPlayers;
    while(min_players <= availablePlayers)
    {
        int ans = 1;
        for(int i = availablePlayers ; i > availablePlayers - min_players ; i--)
        {
            ans *= i;
        }
        int temp = 1;
        for(int i = min_players ; i >= 1 ; i--)
        {
            temp *= i;
        }
        ans /= temp;
        sum += ans;
        min_players += 1;
    }
    return sum;
}

void Solution(ll T)
{
    int n , minPlayers , minLevel , maxLevel;
    cin >> n >> minPlayers >> minLevel >> maxLevel;
    vector<int> skillLevels(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> skillLevels[i];
    }
    int ans = countTeams(skillLevels , minPlayers , minLevel , maxLevel);
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