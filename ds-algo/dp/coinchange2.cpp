//https://leetcode.com/problems/coin-change-2/
#include <bits/stdc++.h>
using namespace std;

int leastCoins(vector<int> &coins, int amount)
{
    // This table will store the answer to our sub problems
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j < coins.size(); j++)
        {
            if (coins[j] <= i)
            {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}

int main()
{

    vector<int> vect{1, 2, 5};
    int x = 5;
    int ans = leastCoins(vect,12);
    cout << ans << endl;

    return 0;
}