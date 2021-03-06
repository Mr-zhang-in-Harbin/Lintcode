/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param root: The root of binary tree.
     * @return: True if this Binary tree is Balanced, or false.
     */
     int deep(TreeNode * root){
        if (root==NULL){
            return 0;
        }
        int left=deep(root->left);
        int right=deep(root->right);
        if (left == -1 || right == -1 || abs(left - right) > 1){
            return -1;
        }
        return max(left,right)+1;
     }
     
    bool isBalanced(TreeNode * root) {
        // write your code here
        return deep(root)!=-1;
    }
};
