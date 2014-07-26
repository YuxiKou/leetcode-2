class Solution {
 public:
  bool isPalindrome(int x)
  {
    if ( x < 0 ) return false;
    if ( x < 10 ) return true;
    return PrvtIsPal(x,x);
  }
  bool PrvtIsPal(int x, int &y)
  {
    if ( x < 0 ) return false;
    if ( x == 0 ) return true;
    if (PrvtIsPal( x / 10, y ) && ( x % 10 == y % 10) )
    {
      y /= 10;
      return true;
    }
    return false;
  }
};