#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxProfit(vector<int>& prices) {
    int ans = 0, min = prices[0];
    for (int i = 1;i < prices.size();i++) {
      if (min < prices[i])
        ans = max(prices[i] - min, ans);
      else
        min = prices[i];
    }
    return ans;
  }
};

int main() {
  vector<int> nums = { 7,1,5,3,6,4 };
  vector<string> words = { "Hello", "Alaska", "Dad", "Peace" };
  vector<vector<int>> matrix = {
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12}
  };

  Solution s;

  cout << s.maxProfit(nums) << endl;

  // int ans = s.findMedianSortedArrays(nums, nums);
  // cout << ans << endl;

  // vector<int> ans = s.twoSum(nums, 9);
  // for(int i = 0; i < ans.size(); i++){
  //     cout << ans[i] << " ";
  // }
  // cout << endl;

  return 0;
}