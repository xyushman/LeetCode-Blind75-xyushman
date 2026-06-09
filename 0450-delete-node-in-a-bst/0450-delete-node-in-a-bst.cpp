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
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* parent = nullptr;
        TreeNode* curr = root;

        // finding the node to delete

        while(curr && curr -> val != key){
            parent = curr;

            if(key < curr->val) curr = curr->left;
            else curr = curr->right;
        }

        if(!curr) return root;


        // case : node ke pass 0 or 1 child ho 
        if(!curr->left || !curr->right){ // matlab ek child missing hota left ka ya right ka 
            TreeNode* child = curr->left ? curr->left : curr->right;

            if(!parent){
                delete curr;
                return child;
            }

            if(parent->left == curr) parent->left = child;
            else parent->right = child;

            delete curr;
        }else{
            // case : node ke pass 2 childern h tho 

            TreeNode* succParent = curr;
            TreeNode* succ = curr->right;

            while(succ->left){
                succParent = succ;
                succ = succ->left;
            }

            curr->val = succ->val;

            if(succParent->left == succ){
                succParent->left = succ->right;
            }else{
                succParent->right = succ->right;
            }

            delete succ;


        }
        return root;
    }
};