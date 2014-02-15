class Solution {
public:
    int removeDuplicates(int A[], int n) {
  		if(n < 3) return n;
  		int curIndex = 0;
  		int number = 0;
  		int count = 0;
  		int i = 0;
  		while(i < n)
  		{
  			number = A[i];
  			count = 0;
  			while(i < n && A[i] == number) 
  			{
  				++count;
  				++i;
  			}
  			for (int j = 0; j < min(2, count); ++j)
  			{
  				A[curIndex++] = number;
  			}
  		}
  		return curIndex;
    }
};