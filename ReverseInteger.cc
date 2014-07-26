class Solution {
public:
    int reverse(int x) {
  		int ret = 0;
  		int sign = x > 0 ? 1 : -1;
  		x *= sign;
  		while(x > 0)      
  		{
  			ret *= 10;
  			ret += x % 10;
  			x /= 10;
  		}
  		ret *= sign;
  		return ret;
    }
};