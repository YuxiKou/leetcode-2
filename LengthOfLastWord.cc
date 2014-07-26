class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int length = 0;
        int ret = 0;
        int i = 0;
        while(s[i] > 0)
        {
        	if(s[i] == ' ') length = 0;
        	else
        	{
        		++length;
        		ret = length;
            }
            ++ i;
        }
        return ret;
    }
};