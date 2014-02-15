class Solution {
public:
    string countAndSay(int n) {
    	string str = "1";
  		for (int i = 1; i < n; ++i)
  		{
  			string newStr = "";
  			int number = 0;
  			for (int j = 0; j < str.length();)
  			{
  				int count = 0;
  				while(j + count < str.length() && str[j] == str[j+count]) ++ count;
  				newStr.append(1, '0' + count);
  				newStr += str[j];
  				j += count;
  			}
  			str = newStr;
  		}      
  		return str;
    }
};