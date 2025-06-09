#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* findMin(TreeNode* node) {
    while (node && node->left != NULL) {
        node = node->left;
    }
    return node;
}

TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == NULL) return NULL;
    if (root->val == key) {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        } else if (root->left == NULL) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        } else {
            TreeNode* temp = findMin(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
    } else if (key < root->val) {
        root->left = deleteNode(root->left, key);
    } else {
        root->right = deleteNode(root->right, key);
    }
    return root;
}

void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);

    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;

    int key = 3;
    root = deleteNode(root, key);

    cout << "Inorder after deleting " << key << ": ";
    inorder(root);
    cout << endl;

    return 0;
}
