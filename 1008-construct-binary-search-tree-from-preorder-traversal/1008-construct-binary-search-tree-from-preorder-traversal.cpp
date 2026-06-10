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
    int idx =0;
    TreeNode* build(vector<int> &preorder, int low, int high){
        if(idx == preorder.size()) return nullptr;

        int val = preorder[idx];

        if(val < low || val > high) return nullptr;

        idx++;

        TreeNode* root = new TreeNode(val);

        root->left = build(preorder,low,root->val);
        root-> right = build(preorder,root->val, high);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return build(preorder,INT_MIN,INT_MAX);
    }
};