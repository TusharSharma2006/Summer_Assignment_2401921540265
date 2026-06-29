class Codec {
public:

    // Tree -> String
    string serialize(TreeNode* root) {

        if (!root){return "";}

        queue<TreeNode*> Qu;

        Qu.push(root);

        string ans = "";

        while (!Qu.empty()) {

            TreeNode* node = Qu.front();
            Qu.pop();

            if (node == nullptr) {
                ans += "N,";
                continue;
            }

            ans += to_string(node->val) + ",";

            Qu.push(node->left);
        
            Qu.push(node->right);
        
        }

        return ans;
    }

    // Decodes your encoded data to tree...
    TreeNode* deserialize(string data) {

        if (data.empty()) {return nullptr;}

        stringstream ss(data);
        
        string str;

        getline(ss, str, ',');
        TreeNode* root = new TreeNode(stoi(str));

        queue<TreeNode*> Qu;
        
        Qu.push(root);

        while (!Qu.empty()) {

            TreeNode* node = Qu.front();
        
            Qu.pop();

            // Left 
            getline(ss, str, ',');
            if (str != "N"){
                node->left = new TreeNode(stoi(str));
                Qu.push(node->left);
            }

            // Right 
            getline(ss, str, ',');
            if (str != "N"){
                node->right = new TreeNode(stoi(str));
                Qu.push(node->right);
            }
        }

        return root;
    }
};