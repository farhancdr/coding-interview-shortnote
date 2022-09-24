#include <cinttypes>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

uint64_t max_profit(const vector<int>& prices) {
    uint64_t profit = 0;
    int max_so_far = 0;
    for (int i = prices.size() - 1; i > -1; i--) {
        if (prices[i] >= max_so_far) {
            max_so_far = prices[i];
        }
        profit += max_so_far - prices[i];
    }
    return profit;
}

int main() {
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N = 0;
        cin >> N;
        // can buy one stock per day, and sell any amount on any day
        vector<int> prices(N, 0);
        for (auto& price : prices) {
            cin >> price;
        }
        cout << max_profit(prices) << endl;
    }
    return 0;
}
