#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cinttypes>
using namespace std;

uint64_t ways_to_make_change(const int cents, const vector<int>& coins) {
    vector<uint64_t> table(cents + 1, 0);
    // base case: cents = 0
    table[0] = 1; 
    // select each coin
    for (int i = 0; i < coins.size(); i++) {
        // update values greater than or equal to the value of the coin
        for (int j = coins[i]; j <= cents; j++) {
            table[j] += table[j - coins[i]];
        }
    }
    return table.back();
}

uint64_t ways_to_make_change_full_table(const int cents, const vector<int>& coins) {
    vector<vector<uint64_t>> table(cents + 1, vector<uint64_t>(coins.size(), 0));

    // base case: cents = 0
    for (int j = 0; j < coins.size(); j++) {
        table[0][j] = 1;
    }

    // calculate rest of dp table
    for (int i = 1; i <= cents; i++) {
        for (int j = 0; j < coins.size(); j++) {
            int coin = coins[j];
            // solutions contributed by this coin
            uint64_t thiscoin = 0;
            if (i - coin >= 0) {
                thiscoin = table[i - coin][j];
            }
            // solutions contributed by other coins
            uint64_t othercoins = 0;
            if (j > 0) {
                othercoins = table[i][j - 1];
            }
            table[i][j] = thiscoin + othercoins;
        }
    }

    return table.back().back();
}
int main() {
    int N = 0; // N cents
    int M = 0; // M coins
    cin >> N >> M;
    vector<int> coins;
    for (int i = 0; i < M; i++) {
        int coin = 0;
        cin >> coin;
        coins.push_back(coin);
    }
    cout << ways_to_make_change(N, coins) << endl;
    return 0;
}
