class Solution {
public:
    int dmtr = 0;

    int height(TreeNode* root) {
        
        if (root == nullptr){
            return 0;
        }

        int left = height(root->left);
        
        int right = height(root->right);

        dmtr = max(dmtr, left + right);

        return 1 + max(left, right);
        
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return dmtr;
    }
    
};