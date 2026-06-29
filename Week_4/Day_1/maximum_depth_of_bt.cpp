class Solution {
public:
    int maxDepth(TreeNode* root){
        
        //base case 
        if(root == nullptr) return 0;

        //recursive case
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
        
    }
};