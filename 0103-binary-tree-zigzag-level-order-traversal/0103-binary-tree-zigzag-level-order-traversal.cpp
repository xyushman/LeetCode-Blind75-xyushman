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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == nullptr) return ans;

        queue<TreeNode*> q;

        q.push(root);

        bool ltr = true;
        while(!q.empty()){
            int sz = q.size();
            vector<int> level(sz);

            for(int i=0; i<sz; i++){
                TreeNode* node = q.front();
                q.pop();

                if(ltr) level[i] = node->val;
                else level[sz-i-1] = node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(level);
            ltr = !ltr;
        }
        return ans;
    }
};