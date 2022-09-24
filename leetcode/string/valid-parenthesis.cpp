#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool check(char a, char b) {
    return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
  }
  bool isOpening(char a) {
    return a == '(' || a == '{' || a == '[';
  }
  bool isValid(string s) {
    if (s.size() & 1) return false;
    stack<char> stk;
    for (int i = 0;i < s.size();i++) {
      if (isOpening(s[i])) stk.push(s[i]);
      else if (!stk.empty() && check(stk.top(), s[i])) {
        stk.pop();
      }
      else return false;
    }
    return stk.empty();
  }
};

int main() {
  // take an vector of number
  vector<int> nums = { 1,2,3,4,5,6,7,8,9,10 };
  vector<string> words = { "Hello", "Alaska", "Dad", "Peace" };
  vector<vector<int>> matrix = {
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12}
  };

  Solution s;

  cout << s.isValid("()") ? true : false;

  // int ans = s.findMedianSortedArrays(nums, nums);
  // cout << ans << endl;

  // vector<int> ans = s.twoSum(nums, 9);
  // for(int i = 0; i < ans.size(); i++){
  //     cout << ans[i] << " ";
  // }
  // cout << endl;

  return 0;
}