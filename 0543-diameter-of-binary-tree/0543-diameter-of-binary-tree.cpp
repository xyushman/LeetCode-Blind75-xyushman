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
    int gheight(TreeNode* root){
        if(root == nullptr) return 0;

        int lh = gheight(root->left);
        int rj = gheight(root->right);

        return 1+max(lh,rj);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;

        int lh = gheight(root->left);
        int rh = gheight(root->right);

        int curr = lh+rh;

        int ld = diameterOfBinaryTree(root->left);
        int rd = diameterOfBinaryTree(root->right);

        return max(curr,max(ld,rd));


    }
};