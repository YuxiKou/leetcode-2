class Solution {
public:
    vector<int> getRow(int rowIndex) {
  		std::vector<int> ret(rowIndex + 1, 1);
  		long long val = 1;
  		for (int i = 1; i < rowIndex; ++i)
  		{
  			val *= rowIndex - i + 1;
  			val /= i;
  			ret[i] = val;
  		}
  		return ret;
    }
};