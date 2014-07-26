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
    int sumNumbers(TreeNode *root) {
        int result = 0;
        sumPath(result, 0, root);
        return result;
    }
    void sumPath(int &result, int prefix, TreeNode *root)
    {
    	if(root == NULL) return;
    	prefix = prefix * 10 + root->val;
    	if(root->left == NULL && root->right == NULL)
    	{
    		result += prefix;
    		return;
    	}
    	sumPath(result, prefix, root->left);
    	sumPath(result, prefix, root->right);
    }
};