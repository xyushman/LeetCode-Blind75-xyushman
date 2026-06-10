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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* curr = root;

        long long prev = LLONG_MIN;

        while(curr != nullptr || !st.empty()){
            while(curr){
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top();
            st.pop();

            if(curr->val <= prev) return false;

            prev = curr->val;
            curr = curr->right;
        }
        return true;
    }
};


/*
        5
       / \
      3   7
     / \
    2   4

    st = [7]

    prev = 5
    curr = 7


*/