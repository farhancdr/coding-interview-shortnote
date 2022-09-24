#include "bits/stdc++.h"
using namespace std;

int lis(int a[], int n)
{
    vector<int> dp(n, 1);
    int mx = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        mx = max(mx, dp[i]);
    }
    return mx;
}


int main(int argc, const char** argv) {
    int a[] = {8, 41, 9, 33, 21, 50, 22, 60};
    int n = sizeof(a) / sizeof(a[0]);

    cout << lis(a, n) << endl;

    return 0;
}