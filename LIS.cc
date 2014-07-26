#include <iostream>

using namespace std;

int BSearch(int a[], int n, int t)
{
     int low = 0;
     int high = n - 1;

     while (low <= high)
     {
          int mid = (low + high) / 2;
          if (t == a[mid])
          {
               return mid;
          }
          else if (t > a[mid])
          {
               low = mid + 1;
          }
          else
          {
               high = mid - 1;
          }
     }
     return low;
}

int LIS_BSearch(int a[], int m[], int n)
{
     int maxlen = 0;          //最长上升子序列的长度
     m[maxlen] = a[0];

     int i;
     for (i = 1; i < n; i++)
     {
          if (a[i] > m[maxlen])
          {
               m[++maxlen] = a[i];
          }
          else
          {
               //返回小于a[i]的最大值的位置p
               int p = BSearch(m, maxlen, a[i]);
               m[p] = a[i];
          }
     }
     return maxlen + 1;
}

int main()
{
     int a[] = {1,2,4,8,3,6,2,7,1};
     int n = sizeof(a) / sizeof(int);
     int m[n];
     cout<<LIS_BSearch(a,m,n)<<endl<<endl;
     for (int i = 0; i < n; ++i)
     {
          cout<<m[i]<<endl;
     }
     return 0;
}