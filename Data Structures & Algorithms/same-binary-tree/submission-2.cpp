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
    // BFS
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return true;
        queue<TreeNode* > pq;
        queue<TreeNode* > qq;
        pq.push(p);
        qq.push(q);
        while(!pq.empty() && !qq.empty()) {
            for(int i = pq.size(); i > 0; i--) {
                TreeNode* nodep = pq.front();
                pq.pop();
                TreeNode* nodeq = qq.front();
                qq.pop();

                if(!nodep && !nodeq) 
                    continue;
                if(!nodep || !nodeq || nodep -> val != nodeq -> val)
                    return false;
                pq.push(nodep -> left);
                qq.push(nodeq -> left);
                pq.push(nodep -> right);
                qq.push(nodeq -> right);
            }
        }

        return true;
    }
};
