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

    unordered_map<int,int> inPos;

    int preIdx = 0;

    TreeNode* build(vector<int> &preorder, int inStart, int inEnd){
        if(inStart > inEnd) return nullptr;

        int rootVal = preorder[preIdx++];
        TreeNode* root = new TreeNode(rootVal);

        int mid = inPos[rootVal];

        root->left = build(preorder,inStart,mid-1);
        root->right = build(preorder,mid+1, inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0; i<inorder.size(); i++){
            inPos[inorder[i]] = i;
        }
        return build(preorder,0, inorder.size() - 1);
    }
};

/*

preorder = [3,9,20,15,7]
inorder  = [9,3,15,20,7]


9  -> 0
3  -> 1
15 -> 2
20 -> 3
7  -> 4
*/