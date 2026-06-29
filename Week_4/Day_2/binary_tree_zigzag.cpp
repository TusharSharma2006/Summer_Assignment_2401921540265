class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if (!root){
            return result;
        }

        queue<TreeNode*> Qu;
        Qu.push(root);

        bool leftToRight = true;

        while (!Qu.empty()) {
            
            int size = Qu.size();
            vector<int> level(size);

            for (int i = 0; i < size; i++){

                TreeNode* node = Qu.front();
                Qu.pop();

                int indx = leftToRight ? i : size - 1 - i;
                level[indx] = node->val;

                if (node->left) Qu.push(node->left);
                if (node->right) Qu.push(node->right);

            }

            leftToRight = !leftToRight;
            result.push_back(level);

        }

        return result;
    }
};