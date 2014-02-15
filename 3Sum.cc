class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        std::vector<vector<int> > result;
        std::vector<int> tuple(3,0);
        int n = num.size();
        sort(num.begin(),num.end());
        for (int i = 0; i < n - 2; ++i)
        {
        	if(i > 0 && num[i] == num[i-1]) continue;
        	int start = i + 1;
        	int end = n - 1;
        	while(start < end)
        	{
				int sum = num[i] + num[start] + num[end];
        		if(sum == 0)
        		{
        			tuple[0] = num[i];
        			tuple[1] = num[start];
        			tuple[2] = num[end];
        			result.push_back(tuple);
					do{++start;} while(start < end && num[start] == num[start-1]);
        			do{--end;} while(start < end && num[end] == num[end+1]);
        		}
        		else if(sum < 0)
        		{
        			do{++start;} while(start < end && num[start] == num[start-1]);
        		}
        		else
        		{
        			do{--end;} while(start < end && num[end] == num[end+1]);
        		}
        	}
        }
        return result;
    }
};