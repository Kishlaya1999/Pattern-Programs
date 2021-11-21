// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
     int n, i, j, k, s, p = 0, l;
     cin >> n;
     s = n - 1;
     for (i = 1; i <= n; i++)
     {
          p = i - 1;
          //by just removing the spaces from pattern 7 we can achieve this pattern
          // for (j = s; j >= i; j--)
          // {
          //      cout << "  ";
          // }
          for (k = 1; k <= i; k++)
          {
               cout << k << " ";
          }
          for (l = 1; l <= i - 1; l++)
          {
               cout << p << " ";
               p--;
          }
          cout << endl;
     }
     return 0;
}
