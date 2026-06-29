class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> result;

        if (!root){
            return result;
        }
        
        queue<TreeNode*> Qu;
        Qu.push(root);

        while (!Qu.empty()) {

            int size = Qu.size();
            vector<int> lvl;

            for (int i = 0; i < size; i++) {
                
                TreeNode* node = Qu.front();
                Qu.pop();

                lvl.push_back(node->val);

                if (node->left){
                    Qu.push(node->left);
                }
                if (node->right){
                    Qu.push(node->right);
                }
            }

            result.push_back(lvl);
        }

        return result;
        
    }
};