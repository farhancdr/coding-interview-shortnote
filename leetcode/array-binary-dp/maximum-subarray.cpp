#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int ans = nums[0], sum = 0;
    for (int i = 0;i < nums.size();i++) {
      sum += nums[i];
      ans = max(ans, sum);
      if (sum < 0)
        sum = 0;
    }
    return ans;
  }
};

int main() {
  // take an vector of number
  vector<int> nums = { -2,1 };
  vector<string> words = { "Hello", "Alaska", "Dad", "Peace" };
  vector<vector<int>> matrix = {
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12}
  };

  Solution s;

  cout << s.maxSubArray(nums) << endl;

  // int ans = s.findMedianSortedArrays(nums, nums);
  // cout << ans << endl;

  // vector<int> ans = s.twoSum(nums, 9);
  // for(int i = 0; i < ans.size(); i++){
  //     cout << ans[i] << " ";
  // }
  // cout << endl;

  return 0;
}