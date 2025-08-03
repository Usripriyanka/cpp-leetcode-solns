class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return NULL;
        
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);

        return 1+max(left,right);
        
    }
};
