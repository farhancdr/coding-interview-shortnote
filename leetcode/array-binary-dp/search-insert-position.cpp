#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] == target)
        return mid;
      else if (nums[mid] < target)
        left = mid + 1;
      else
        right = mid - 1;
    }
    return left;
  }
};

int main() {
  // take an vector of number
  vector<int> nums = { 1,2,4,5,6,7,8,9,10 };
  vector<string> words = { "Hello", "Alaska", "Dad", "Peace" };
  vector<vector<int>> matrix = {
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12}
  };

  Solution s;

  cout << s.searchInsert(nums, 55) << endl;

  // int ans = s.findMedianSortedArrays(nums, nums);
  // cout << ans << endl;

  // vector<int> ans = s.twoSum(nums, 9);
  // for(int i = 0; i < ans.size(); i++){
  //     cout << ans[i] << " ";
  // }
  // cout << endl;

  return 0;
}