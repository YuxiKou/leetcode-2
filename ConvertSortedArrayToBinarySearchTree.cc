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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        int n = num.size();
        return convert(num, 0, n - 1);
    }
    TreeNode *convert(std::vector<int> &num, int start, int end)
    {
    	if(start > end) return NULL;
    	int mid = start + (end - start) / 2;
    	TreeNode *ret = new TreeNode(num[mid]);
    	ret->left = convert(num, start, mid - 1);
    	ret->right = convert(num, mid + 1, end);
    	return ret;
    }
};