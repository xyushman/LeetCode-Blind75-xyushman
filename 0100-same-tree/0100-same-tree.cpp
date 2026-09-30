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
        queue<pair<TreeNode*, TreeNode*>> qNodes;

        qNodes.push({p,q});

        while(!qNodes.empty()){
            auto [nodep, nodeq] = qNodes.front();

            qNodes.pop();

            if(nodep == nullptr && nodeq==nullptr) continue;

            if(nodep == nullptr || nodeq == nullptr) return false;

            if(nodep->val != nodeq->val) return false;

            qNodes.push({nodep->left,nodeq->left});
            qNodes.push({nodep->right,nodeq->right});
        }
        return true;
    }
};