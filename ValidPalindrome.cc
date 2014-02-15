class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        if(n < 2) return true;
        int left = 0;
        int right = n - 1;
        while(left < right)
        {
        	if(!isAlphaNumeric(s[left])) 
        	{
        		++left;
        		continue;
        	}
        	if(!isAlphaNumeric(s[right]))
        	{
        		--right;
        		continue;
        	}
        	if(toLower(s[left]) != toLower(s[right])) return false;
	       	++left;
	       	--right;
        }
        return true;
    }
    bool isAlphaNumeric(char c)
    {
    	if(c <= 'z' && c >= 'a') return true;
    	if(c <= 'Z' && c >= 'A') return true;
    	if(c <= '9' && c >= '0') return true;
    	return false;
    }
    char toLower(char c)
    {
    	if(c <= 'Z' && c >= 'A') return c + 'a' - 'A';
    	if(c <= '9' && c >= '0') return c;
    }
};