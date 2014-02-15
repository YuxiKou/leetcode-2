#include <iostream>

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        if(n == 0) return 0;
        int length = n;
        int curIndex = 0;
        int lastIndex = n - 1;
        while(true)
        {
        	while(curIndex < lastIndex && A[curIndex] != elem) ++curIndex;
        	while(curIndex < lastIndex && A[lastIndex] == elem) 
        	{
        		--lastIndex;
        		--length;
        	}
        	if(curIndex >= lastIndex) break;
        	std::swap(A[curIndex], A[lastIndex]);
        }
        return length;
    }
};