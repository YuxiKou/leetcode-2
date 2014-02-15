class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
    	std::vector<int> ret;
    	int length = numbers.size();
  		map<int, int> hash;
  		for (int i = 0; i < length; ++i)
  		{
  			if(hash[target - numbers[i]] > 0) 
  			{
  				ret.push_back(hash[target - numbers[i]]);
  				ret.push_back(i + 1);
  				return ret;
  			}
  			hash[numbers[i]] = i + 1;
  		}
  		return ret;
  	}
};