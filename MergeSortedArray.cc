class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
  		int indexA = m - 1;
  		int indexB = n - 1;
  		int indexNew = m + n - 1;
  		while(indexNew >= 0)      
  		{
  			if(indexA < 0)	A[indexNew] = B[indexB--];
  			else if(indexB < 0) return;
  			else if(A[indexA] < B[indexB])
  			{
  				A[indexNew] = B[indexB--];
  			}
  			else
  			{
  				A[indexNew] = A[indexA--];
  			}
  			--indexNew;
  		}
    }
};