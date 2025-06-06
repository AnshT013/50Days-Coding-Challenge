#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;
    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = true;
    while (!q.empty()) {
        int size = q.size();
        vector<int> row(size);
        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front();
            q.pop();
            int index = leftToRight ? i : (size - 1 - i);
            row[index] = node->val;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        result.push_back(row);
        leftToRight = !leftToRight;
    }
    return result;
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<vector<int>> res = zigzagLevelOrder(root);
    for (auto level : res) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
