#include <bits/stdc++.h>
using namespace std;
/*
  * @https://leetcode.com/problems/binary-tree-paths/
  *
  *
  */
  // @lc code=start
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


class Solution {
public:
  vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    string stack = "";
    dfs(root, stack, ans);
    return ans;
  }

  void dfs(TreeNode* root, string stack, vector<string>& ans) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) {
      stack += to_string(root->val);
      ans.push_back(stack);
      return;
    }
    stack += to_string(root->val);
    stack += "->";
    dfs(root->left, stack, ans);
    dfs(root->right, stack, ans);
    return;
  }
};

int main(){
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);
  Solution s;
  vector<string> ans = s.binaryTreePaths(root);
  for (auto i : ans) {
    cout << i << endl;
  }
  return 0;
}