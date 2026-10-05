class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int, int>>> nodes;

        queue<tuple<TreeNode*, int, int>> q;

        q.push({root, 0, 0});

        while (!q.empty()) {
            auto [node, row, col] = q.front();
            q.pop();

            if (!node) continue;

            nodes[col].push_back({row, node->val});

            q.push({node->left, row + 1, col - 1});
            q.push({node->right, row + 1, col + 1});
        }

        vector<vector<int>> ans;

        for (auto &[col, vec] : nodes) {
            sort(vec.begin(), vec.end());

            vector<int> column;

            for (auto &[row, value] : vec) {
                column.push_back(value);
            }

            ans.push_back(column);
        }

        return ans;
    }
};
