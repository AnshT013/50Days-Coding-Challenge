#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function to perform in-order traversal
void inOrder(TreeNode* root, int& k, int& result) {
    if (!root) return;
    inOrder(root->left, k, result);
    k--;
    if (k == 0) {
        result = root->val;
        return;
    }
    inOrder(root->right, k, result);
}

int kthSmallest(TreeNode* root, int k) {
    int result = -1;
    inOrder(root, k, result);
    return result;
}

// Helper to insert nodes (BST property)
TreeNode* insert(TreeNode* root, int key) {
    if (!root) return new TreeNode(key);
    if (key < root->val) root->left = insert(root->left, key);
    else root->right = insert(root->right, key);
    return root;
}

int main() {
    TreeNode* root = nullptr;
    root = insert(root, 5);
    insert(root, 3);
    insert(root, 6);
    insert(root, 2);
    insert(root, 4);
    insert(root, 1);

    int k = 3;
    cout << "Kth Smallest Element in BST: " << kthSmallest(root, k) << endl;  // Output: 3
    return 0;
}
