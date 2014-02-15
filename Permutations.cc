class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
    	int n = num.size();
    	std::vector<vector<int> > result;
		if(n < 1) return result;

    	std::vector<int> curPerm;
    	std::vector<bool> visited(n, false);
    	getPermutation(result, visited, curPerm, num);
    	return result;
    }
    void getPermutation(std::vector<vector<int> > &result, 
    	std::vector<bool> &visited, 
    	std::vector<int> &curPerm, 
    	std::vector<int> &num)
    {
    	if(curPerm.size() == visited.size())
    	{
    		result.push_back(curPerm);
    		return;
    	}
    	for (int i = 0; i < num.size(); ++i)
    	{
    		if(visited[i] == false)
    		{
    			visited[i] = true;
    			curPerm.push_back(num[i]);
    			getPermutation(result, visited, curPerm, num);
    			curPerm.pop_back();
    			visited[i] = false;
    		}
    	}
    }
};