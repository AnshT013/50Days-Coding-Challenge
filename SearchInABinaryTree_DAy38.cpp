#include <iostream>
using namespace std;

// Definition of TreeNode
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to search a value in a binary tree
bool search(TreeNode* root, int target) {
    if (root == nullptr)
        return false;

    if (root->val == target)
        return true;

    // search in left or right subtree
    return search(root->left, target) || search(root->right, target);
}

// Helper to build a simple tree manually
TreeNode* buildSampleTree() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(7);
    return root;
}

// Main function
int main() {
    TreeNode* root = buildSampleTree();

    int target;
    cout << "Enter the value to search in Binary Tree: ";
    cin >> target;

    if (search(root, target))
        cout << "Value " << target << " found in the Binary Tree." << endl;
    else
        cout << "Value " << target << " NOT found in the Binary Tree." << endl;

    return 0;
}
