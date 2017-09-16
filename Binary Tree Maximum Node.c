class Solution {
public:
    /**
     * @param root the root of binary tree
     * @return the max node
     */
    TreeNode* maxNode(TreeNode* root) {
        // Write your code here
        if (root==NULL)
            return root;
        TreeNode *left=maxNode(root->left);
        TreeNode *right=maxNode(root->right);
        
        return Max(root,Max(left,right));
    }
    
    TreeNode *Max(TreeNode *a,TreeNode *b){
        if (a==NULL)
            return b;
        if (b==NULL)
            return a;
        if (a->val>b->val)
            return a;
        return b;
    }
};
