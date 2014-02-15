class Solution {
public:
    int climbStairs(int n) {
        if(n < 2) return 1;
        int a = 1, b = 1;
        for (int i = 2; i < n; ++i)
        {	
        	a += b;
        	swap(a, b);
        }
        return b;
    }
};