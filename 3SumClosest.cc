class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int n = num.size();
        if(n < 3) return -1;
        int result = num[0] + num[1] + num[2];
        sort(num.begin(),num.end());
        for (int i = 0; i < n - 2; ++i)
        {
        	if(i > 0 && num[i] == num[i-1]) continue;
        	int start = i + 1;
        	int end = n - 1;
        	while(start < end)
        	{
				int sum = num[i] + num[start] + num[end];
                if(abs(sum - target) < abs(result - target)) result = sum;
        		if(sum == target)
        		{
        			return target;
        		}
        		else if(sum < target)
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
    int abs(int num)
    {
        return num > 0 ? num : -num;
    }
};