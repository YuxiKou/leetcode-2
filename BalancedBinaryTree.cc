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
    bool isBalanced(TreeNode *root) {
		return getBalanced(root) != -1;
    }
    int getBalanced(TreeNode *root)
    {
    	if(root == NULL) return 0;
    	int left = getBalanced(root->left);
    	if(left == -1) return -1;
    	int right = getBalanced(root->right);
    	if(right == -1) return -1;
    	if((left > right ? left - right : right - left) > 1) return -1;
    	return max(left, right) + 1;
    }
};