class Solution {
public:
    vector<string> letterCombinations(string digits) {
		vector<string> letterMap(10, "");
        letterMap[2] = "abc";
        letterMap[3] = "def";
        letterMap[4] = "ghi";
        letterMap[5] = "jkl";
        letterMap[6] = "mno";
        letterMap[7] = "pqrs";
        letterMap[8] = "tuv";
        letterMap[9] = "wxyz";
        std::vector<string> result;
        getCombination(digits, result, "", letterMap);
        return result;
    }
    void getCombination(string &digits, vector<string> &result, string prefix, std::vector<string> &map)
    {
    	int cur = prefix.size();
    	int n = digits.size();
    	if(n == cur) 
    	{
    		result.push_back(prefix);
    		return;
    	}
    	int letter = digits[cur] - '0';
    	for (int i = 0; i < map[letter].size(); ++i)
    	{
    		getCombination(digits, result, prefix+map[letter][i], map);
    	}
    }
};