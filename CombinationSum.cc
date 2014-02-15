class Solution
{
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target)
    {
    	std::vector<vector<int> > result;
    	std::vector<int> curComb;
    	sort(candidates.begin(), candidates.end());
    	getComb(result,candidates, curComb, target, 0);
    	return result;
    }
    void getComb(std::vector<vector<int> > &result, std::vector<int> &candidates, std::vector<int> &curComb, int target, int step)
    {
    	if(target < 0)
    	{
    		return;
    	}
    	if(target == 0)
    	{
    		result.push_back(curComb);
    		return;
    	}
    	for (int i = step; i < candidates.size(); ++i)
    	{	
    		if(candidates[i] <= target)
    		{
    			curComb.push_back(candidates[i]);
    			getComb(result, candidates, curComb, target - candidates[i], i);
    			curComb.pop_back();
    		}
    	}
    }
};