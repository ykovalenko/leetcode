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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return preOrderTraversal(p, q);
    }
    
protected:
    bool preOrderTraversal(TreeNode* p, TreeNode* q)
    {
        if (nullptr == p && nullptr == q)
            return true;

        if (nullptr == p || nullptr == q)
            return false;
        
        if (p->val != q->val)
            return false;
        return preOrderTraversal(p->left, q->left) && preOrderTraversal(p->right, q->right);
    }
};