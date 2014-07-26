class Solution {
public:
    vector<string> generateParenthesis(int n) {
        std::vector<string> result;
        genParent(result, n, n, "");
        return result;
    }
    void genParent(vector<string> &result, int countLeft, int countRight, string curString)
    {
    	if(countLeft > countRight) return;
    	int curLen = curString.size();
    	if(countLeft == 0)
    	{
    		for (int i = 0; i < countRight; ++i)
    		{
    			curString += ')';
    		}
    		result.push_back(curString);
    		return;
    	}
		genParent(result, countLeft - 1, countRight, curString + '(');
    	if(countLeft < countRight)
    	{
    		genParent(result, countLeft, countRight - 1, curString + ')');
    	}
    }
};