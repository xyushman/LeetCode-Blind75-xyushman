class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        // Tree empty
        if(root == nullptr)
            return ans;

        queue<TreeNode*> q;

        // STEP 1:
        // Put root in queue
        q.push(root);

        /*
                  1
                /   \
               2     3
              / \   / \
             4  5  6  7
        */

        // Queue = [1]

        while(!q.empty()) {

            // Number of nodes in current level
            int sz = q.size();

            vector<int> level;

            /*
               LEVEL 1
               Queue = [1]
               sz = 1
            */

            for(int i = 0; i < sz; i++) {

                // Take front node
                TreeNode* node = q.front();
                q.pop();

                /*
                    node = 1
                    Queue becomes empty
                */

                // Store node value
                level.push_back(node->val);

                /*
                    level = [1]
                */

                // Push left child
                if(node->left != nullptr)
                    q.push(node->left);

                /*
                    push 2
                    Queue = [2]
                */

                // Push right child
                if(node->right != nullptr)
                    q.push(node->right);

                /*
                    push 3
                    Queue = [2,3]
                */
            }

            // Store whole level
            ans.push_back(level);

            /*
                ans = [[1]]
            */


            /*
            --------------------------------

               LEVEL 2
               Queue = [2,3]
               sz = 2

            --------------------------------
            */

            /*
                i = 0

                node = 2
                Queue = [3]

                level = [2]

                push 4
                Queue = [3,4]

                push 5
                Queue = [3,4,5]
            */

            /*
                i = 1

                node = 3
                Queue = [4,5]

                level = [2,3]

                push 6
                Queue = [4,5,6]

                push 7
                Queue = [4,5,6,7]
            */

            /*
                ans = [[1],[2,3]]
            */


            /*
            --------------------------------

               LEVEL 3
               Queue = [4,5,6,7]
               sz = 4

            --------------------------------
            */

            /*
                Process 4,5,6,7

                No children added

                level = [4,5,6,7]

                Queue becomes empty
            */

            /*
                ans =
                [[1],
                 [2,3],
                 [4,5,6,7]]
            */
        }

        return ans;
    }
};