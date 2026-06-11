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
    vector<int> v;
    void inOrder(TreeNode* root){
        if(root == nullptr) return;

        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }

    bool findTarget(TreeNode* root, int k) {
        inOrder(root);
        if(v.size() < 2) return false;
        for(int i=0; i<v.size(); i++){
            auto it = find(v.begin(), v.end(),(k-v[i]));
            if( it != v.end()){
                int idx = it - v.begin();
                if(idx != i) return true;
            }
        }
        return false;
    }
};