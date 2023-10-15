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
    bool isUnivalTree(TreeNode* root) {
        int one=root->val;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* t=q.front();
            q.pop();
            if(t->val!=one)return false;
            if(t->right)q.push(t->right);
            if(t->left)q.push(t->left);
        }
        return true;
    }
};