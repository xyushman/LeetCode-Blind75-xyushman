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
    struct Pair{
        TreeNode* node;
        int dist;
        Pair(TreeNode* n, int d) : node(n), dist(d){}
    };
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        return solve(root,0).node;
    }
    Pair solve(TreeNode* root, int d){
        if(!root) return Pair(nullptr,d);
        Pair l = solve(root->left,d+1);
        Pair r = solve(root->right, d+1);
        if(l.dist == r.dist) return Pair(root, l.dist);
        return (l.dist>r.dist) ? l:r;
    }
};