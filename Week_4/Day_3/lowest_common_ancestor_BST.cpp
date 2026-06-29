class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode* p,TreeNode* q) {

        while(root){
            if (p->val < root->val && q->val < root->val){
                root = root->left;//left case
            }
            else if (p->val > root->val && q->val > root->val){
                root = root->right;//right case
            }
            else{
                return root;//root case
            }
        }
        
        return nullptr;

    }
};