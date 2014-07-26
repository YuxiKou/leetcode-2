#include <iostream>

class Solution
{
public:
  int singleNumber(int A[], int n)
  {
    int singleNumber = 0;
    for(int i = 0; i < n ; ++ i)
    {
      singleNumber ^= A[i];
    }
    return singleNumber;
  }
};
