#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int max_sum_contiguous(const vector<int>& arr) {
    int sum = arr[0];
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (sum < 0) {
            sum = 0;
        }
        sum += arr[i];
        if (sum > ans) {
            ans = sum;
        }
    }
    return ans;
}

int max_sum_non_contiguous(const vector<int>& arr) {
    int sum = 0;
    bool allnegative = true;
    for (int e : arr) {
        if (e > 0) {
            sum += e;
            allnegative = false;
        }
    }
    if (allnegative) {
        sum = numeric_limits<int>::min();
        for (int e : arr) {
            sum = max(e, sum);
        }
    }
    return sum;
}

int main() {
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N = 0;
        cin >> N;
        vector<int> arr(N, 0);
        for (int j = 0; j < N; j++) {
            int e = 0;
            cin >> e;
            arr[j] = e;
        }
        cout << max_sum_contiguous(arr) << " "
             << max_sum_non_contiguous(arr) << endl;
    }
    return 0;
}
