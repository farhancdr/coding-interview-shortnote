#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//check two tree are identical or not
bool isIdentical(TreeNode* root1, TreeNode* root2) {
    if(root1 == nullptr && root2 == nullptr) return true;
    if(root1 == nullptr || root2 == nullptr) return false;
    if(root1->val != root2->val) return false;
    return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
