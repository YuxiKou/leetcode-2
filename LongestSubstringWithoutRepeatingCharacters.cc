class Solution {
public:
    int lengthOfLongestSubstring(string s) {
  		const int SIZE = 256;
  		std::vector<int> map(SIZE, -1);
  		int maxLength = 0;
  		int curStart = 0;
  		int n = s.size();
  		for (int i = 0; i < n; ++i)
  		{
  			int index = s[i];
  			if(map[index] > -1 && map[index] >= curStart)
  			{
  				if(maxLength < i - curStart) maxLength = i - curStart;
  				curStart = map[index] + 1;
  			}
			map[index] = i;
  		}
		if(maxLength < n - curStart) maxLength = n - curStart;
  		return maxLength;
    }
};