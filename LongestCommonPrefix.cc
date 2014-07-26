class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
    	int n = strs.size();
    	if(n == 0) return "";
        int minLength = INT_MAX;
        string ret = "";
        for(int i = 0; i < n; ++ i)
        {
        	if(strs[i].size() < minLength) minLength = strs[i].size();
        }
        for (int i = 0; i < minLength; ++i)
        {
        	for (int j = 0; j < n; ++j)
        	{
        		if(strs[j][i] != strs[0][i]) return ret;
        	}
        	ret += strs[0][i];
        }
        return ret;
    }
};