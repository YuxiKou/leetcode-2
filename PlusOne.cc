class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
  		bool allNines = true;
  		int length = digits.size();
  		for(int i = 0; i < length; ++ i)      
  		{
  			if(digits[i] != 9)
  			{
  				allNines = false;
  				break;
  			}
  		}
  		if(allNines)
  		{
  			std::vector<int> ret(length + 1, 0);
  			ret[0] = 1;
  			return ret;
  		}
  		else
  		{
  			int carry = 0;
  			++ digits[length-1];
  			for(int i = length - 1; i >= 0; -- i)
  			{
  				digits[i] += carry;
  				carry = digits[i] / 10;
				digits[i] %= 10;
  			}
  		}
  		return digits;
    }
};