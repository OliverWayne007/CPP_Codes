#include <bits/stdc++.h>

using namespace std;

#define ll long long

int search(int row, int col, int energy, int mat[4][4] , vector<vector<int>>& dp)
{
    if (row == 3)
    {
        return energy - mat[row][col];
    }
    
    if(dp[row][col] != INT_MAX)
    {
        return dp[row][col];
    }
    
    int mxe = INT_MIN;
    
    if(col - 1 >= 0)
    {
        int poss1 = search(row + 1, col - 1, energy - mat[row][col], mat, dp);
        mxe = max(mxe , poss1);
    }
    if(col >= 0)
    {
        int poss2 = search(row + 1, col, energy - mat[row][col], mat, dp);
        mxe = max(mxe , poss2);
    }
    if(col + 1 <= 3)
    {
        int poss3 = search(row + 1, col + 1, energy - mat[row][col], mat, dp);
        mxe = max(mxe , poss3);
    }
    return dp[row][col] = mxe;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int mat[4][4];
    int energy = 100;
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> mat[i][j];
        }
    }
    
    int ans = INT_MIN;
    
    for (int j = 0; j < 4; j++)
    {
        vector<vector<int>> dp(4 , vector<int>(4 , INT_MAX));
        int poss = search(0 , j , energy , mat , dp);
        ans = max(ans , poss);
    }
    
    cout << ans << endl;

    return 0;
}