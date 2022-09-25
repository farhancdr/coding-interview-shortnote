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

// insert to binary tree
TreeNode* insert(TreeNode* root, int val) {
    if(root == nullptr) return new TreeNode(val);
    if(val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

// inorder traversal of binary tree
TreeNode* inorder(TreeNode* root) {
    if(root == nullptr) return nullptr;
    root->left = inorder(root->left);
    cout << root->val << " ";
    root->right = inorder(root->right);
    return root;
}
//preorder traversal of binary tree
TreeNode* preorder(TreeNode* root) {
    if(root == nullptr) return nullptr;
    cout << root->val << " ";
    root->left = preorder(root->left);
    root->right = preorder(root->right);
    return root;
}

// postorder traversal of binary tree
TreeNode* postorder(TreeNode* root) {
    if(root == nullptr) return nullptr;
    root->left = postorder(root->left);
    root->right = postorder(root->right);
    cout << root->val << " ";
    return root;
}

// search in binary tree
bool search(TreeNode* root, int val) {
    if(root == nullptr) return false;
    if(root->val == val) return true;
    if(val < root->val) return search(root->left, val);
    return search(root->right, val);
}

// delete from binary tree
TreeNode* deleteNode(TreeNode* root, int val) {
    if(root == nullptr) return nullptr;
    if(val < root->val) root->left = deleteNode(root->left, val);
    else if(val > root->val) root->right = deleteNode(root->right, val);
    else {
        if(root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        else {
            TreeNode* temp = root->right;
            while(temp->left != nullptr) temp = temp->left;
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
    }
    return root;
}

//print left view of binary tree
void leftView(TreeNode* root, int level, int &maxLevel) {
    if(root == nullptr) return;
    if(level > maxLevel) {
        cout << root->val << " ";
        maxLevel = level;
    }
    leftView(root->left, level+1, maxLevel);
    leftView(root->right, level+1, maxLevel);
}

//print right view of binary tree
void rightView(TreeNode* root, int level, int &maxLevel) {
    if(root == nullptr) return;
    if(level > maxLevel) {
        cout << root->val << " ";
        maxLevel = level;
    }
    rightView(root->right, level+1, maxLevel);
    rightView(root->left, level+1, maxLevel);
}

//get the minimum value in the binary tree
TreeNode* minValue(TreeNode* root) {
    if(root == nullptr) return nullptr;
    while(root->left != nullptr) root = root->left;
    return root;
}

//get the maximum value in the binary tree
TreeNode* maxValue(TreeNode* root) {
    if(root == nullptr) return nullptr;
    while(root->right != nullptr) root = root->right;
    return root;
}

//get height of the binary tree
int height(TreeNode* root) {
    if(root == nullptr) return 0;
    return 1 + max(height(root->left), height(root->right));
}

//maximum depth of the binary tree
int maxDepth(TreeNode* root) {
    if(root == nullptr) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

//count leaves in the binary tree
int countLeaves(TreeNode* root) {
    if(root == nullptr) return 0;
    if(root->left == nullptr && root->right == nullptr) return 1;
    return countLeaves(root->left) + countLeaves(root->right);
}

//check two binary trees are identical or not
bool isIdentical(TreeNode* root1, TreeNode* root2) {
    if(root1 == nullptr && root2 == nullptr) return true;
    if(root1 == nullptr || root2 == nullptr) return false;
    return (root1->val == root2->val) && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}

//get the maximum path sum in the binary tree
int maxPathSum(TreeNode* root) {
    if(root == nullptr) return 0;
    int left = max(0, maxPathSum(root->left));
    int right = max(0, maxPathSum(root->right));
    return max(root->val + left + right, max(left, right));
}

//mirror of the binary tree
TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        
        swap(root->left,root->right);
        
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
        
}

//check a tree is symmetric or not
bool isSymmetric(TreeNode* p , TreeNode* q){
    if(p == NULL && q == NULL) //left & right node is NULL 
        return true; 
    else if(p == NULL || q == NULL) //one of them is Not NULL
        return false; 
    else if(p->val!=q->val) 
        return false;
    return isSymmetric(p->left,q->right) && isSymmetric(p->right,q->left); //comparing left subtree's left child with right subtree's right child --AND-- comparing left subtree's right child with right subtree's left child
}
bool isSymmetric(TreeNode* root) {
    if(root==NULL) return true; //Tree is empty
    return isSymmetric(root->left,root->right);
}

//check a tree is balanced or not
bool isBalanced(TreeNode* root) {
    if(root == nullptr) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return abs(lh-rh) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

//check a tree is complete or not
bool isComplete(TreeNode* root) {
    if(root == nullptr) return true;
    queue<TreeNode*> q;
    q.push(root);
    bool flag = false;
    while(!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();
        if(temp->left) {
            if(flag) return false;
            q.push(temp->left);
        }
        else flag = true;
        if(temp->right) {
            if(flag) return false;
            q.push(temp->right);
        }
        else flag = true;
    }
    return true;
}

//check a tree is perfect or not
bool isPerfect(TreeNode* root) {
    if(root == nullptr) return true;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        int size = q.size();
        for(int i=0; i<size; i++) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            if(temp->left == nullptr && temp->right != nullptr) return false;
            if(temp->left != nullptr && temp->right == nullptr) return false;
        }
    }
    return true;
}

//check a tree is full or not
bool isFull(TreeNode* root) {
    if(root == nullptr) return true;
    if(root->left == nullptr && root->right == nullptr) return true;
    if(root->left != nullptr && root->right != nullptr) return isFull(root->left) && isFull(root->right);
    return false;
}

// check two trees are isomorphic or not
bool isIsomorphic(TreeNode* root1, TreeNode* root2) {
    if(root1 == nullptr && root2 == nullptr) return true;
    if(root1 == nullptr || root2 == nullptr) return false;
    if(root1->val != root2->val) return false;
    return (isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right)) || (isIsomorphic(root1->left, root2->right) && isIsomorphic(root1->right, root2->left));
}

//check a tree is subtree of another tree or not
bool isSubtree(TreeNode* root1, TreeNode* root2) {
    if(root1 == nullptr && root2 == nullptr) return true;
    if(root1 == nullptr || root2 == nullptr) return false;
    if(isIdentical(root1, root2)) return true;
    return isSubtree(root1->left, root2) || isSubtree(root1->right, root2);
}

//graphical representation of the binary tree
void printTree(TreeNode* root) {
    if(root == nullptr) return;
    queue<TreeNode*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();
        if(temp == nullptr) {
            cout << endl;
            if(!q.empty()) q.push(nullptr);
        }
        else {
            cout << temp->val << " ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}


int main(int argc, const char** argv) {

    TreeNode* root = nullptr;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 6);
    root = insert(root, 8);
    inorder(root);
    cout << "\n=================" << endl;
    preorder(root);
    cout << "\n=================" << endl;
    postorder(root);
    cout << "\n=================" << endl;
    cout << search(root, 3) << endl;
    cout << search(root, 9) << endl;
    root = deleteNode(root, 3);
    inorder(root);
    cout << "\n=================" << endl;
    root = deleteNode(root, 5);
    inorder(root);
    cout << "\n=================" << endl;

    // deleteNode(root, 8);
    // inorder(root);
 
    // cout<< maxValue(root)->val << endl;
    // cout<< minValue(root)->val << endl;
    // cout<< maxDepth(root) << endl;
    
    // cout<< height(root) << endl;

    //  isSymmetric(root)?cout<<"YES":cout<<"NO"<< endl;

    // print left view of the binary tree
    // int maxLevel = 0;
    // leftView(root, 1, maxLevel);+

    // print right view of the binary tree
    int maxLevel = 0;
    rightView(root, 1, maxLevel);
    
    return 0;
}
