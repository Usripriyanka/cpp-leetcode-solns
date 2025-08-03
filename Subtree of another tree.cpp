class Solution {
private:
    bool isSame(TreeNode* root, TreeNode* subRoot){
        if(!root && ! subRoot) return true;
        if(root && subRoot && root->val == subRoot->val){
            return isSame(root->left,subRoot->left) && isSame(root->right,subRoot->right);
        }
        return false;
    }    
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        if(!subRoot) return true;
        if(isSame(root,subRoot)) {return true;}
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);


    
    
        
        
    }
};
