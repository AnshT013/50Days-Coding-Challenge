#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isValidBST(TreeNode* root, TreeNode* minNode = NULL, TreeNode* maxNode = NULL) {
    if (!root) return true;
    if ((minNode && root->val <= minNode->val) || (maxNode && root->val >= maxNode->val))
        return false;
    return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
}

int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    cout << (isValidBST(root) ? "true" : "false");
    return 0;
}
