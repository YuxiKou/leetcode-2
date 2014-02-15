class Solution {
public:
    vector<vector<int> > generate(int numRows) {
		vector<vector<int> > ret;
		if(numRows == 0) return ret;
		std::vector<int> row;
  	      for (int i = 1; i < numRows + 1; ++i)
  	      {
  	      	vector<int> newRow(i, 1);
  	      	for (int j = 1; j < i - 1; ++j)
  	      	{
  	      		newRow[j] = row[j-1] + row[j];
  	      	}
  	      	ret.push_back(newRow);
  	      	row = newRow;
  	      }
  	      return ret;
    }
};