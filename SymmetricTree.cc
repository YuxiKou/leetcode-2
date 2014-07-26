/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if(root == NULL) return true;
        return isSymmetricPrvt(root->left, root->right);
    }
    bool isSymmetricPrvt(TreeNode *left, TreeNode *right)
    {
    	if(left == NULL && right == NULL) return true;
    	if(left == NULL || right == NULL || left->val != right->val) return false;
    	return isSymmetricPrvt(left->left, right->right) && isSymmetricPrvt(left->right, right->left);
    }
};