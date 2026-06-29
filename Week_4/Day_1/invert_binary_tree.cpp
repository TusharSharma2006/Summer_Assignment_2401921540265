public:
    TreeNode* invertTree(TreeNode* root) {

        if(root == nullptr){
            return nullptr;
        }

        swap(root->left, root->right);

        invertTree(root->left);//for left paaji
        
        invertTree(root->right);//for right paaji

        return root;
    }
};