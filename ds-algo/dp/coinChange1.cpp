//https://leetcode.com/problems/coin-change-2/
#include <bits/stdc++.h>
using namespace std;

int solve(int m, vector<int> &coins)
{
    int n = coins.size();
    int dp[n+1][m + 1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(j==0) dp[i][j]=1;
            else if(i==0)
                dp[i][j] = 0;
            else
            {
                if(coins[i-1]<=j)dp[i][j] = dp[i - 1][j] + dp[i] [ j - coins[i - 1]];
                else dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][m];
}

int main()
{

    vector<int> vect{1, 2, 5};
    int x = 5;
    int ans = solve(x, vect);
    cout << ans << endl;

    return 0;
}