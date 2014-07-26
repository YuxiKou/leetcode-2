class Solution
{
public:
  int removeDuplicates(int A[], int n)
  {
    if(n <= 1) return n;
    int curIndex = 0;
    for(int i = 1; i < n; ++ i)
    {
    	if(A[curIndex] != A[i]) 
    	{
    		++ curIndex;
    		A[curIndex] = A[i];
    	}
    }
    return curIndex + 1;
  }
};
