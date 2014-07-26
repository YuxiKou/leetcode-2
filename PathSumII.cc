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
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int> > result;
        vector<int> curPath;
        getPath(result, curPath, root, sum);
        return result;
    }
    void getPath(vector<vector<int> > &result, vector<int> &curPath, TreeNode *root, int sum)
    {
    	if(root == NULL) return;
    	curPath.push_back(root->val);
    	if(root->val == sum && root->left == NULL && root->right == NULL) 
    	{
    		result.push_back(curPath);
    	}
    	getPath(result, curPath, root->left, sum - root->val);
    	getPath(result, curPath, root->right, sum - root->val);
    	curPath.pop_back();
    }
};