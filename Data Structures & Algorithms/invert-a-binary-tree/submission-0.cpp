/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) 
            return nullptr;
        queue<TreeNode* > line;
        line.push(root);
        while(!line.empty()) {
            TreeNode* temp = line.front();
            line.pop();
            swap(temp -> left, temp -> right);
            if(temp -> left)
                line.push(temp -> left);
            if(temp -> right)
                line.push(temp -> right);
        }

        return root;
    }
};
