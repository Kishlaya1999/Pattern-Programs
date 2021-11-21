// 1               9
// 1 2           8 9
// 1 2 3       7 8 9
// 1 2 3 4   6 7 8 9
// 1 2 3 4 5 6 7 8 9

#include <iostream>
using namespace std;

int main()
{
     int i, j, k, l, sp = 0, n, p;
     cout << "Enter the number of rows:";
     cin >> n;
     sp = n * 2 - 3;
     for (i = 1; i <= n - 1; i++)
     {
          p = 1;
          for (j = 1; j <= i; j++)
          {
               cout << p << " ";
               p++;
          }
          for (k = sp; k >= 1; k--)
          {
               cout << "  ";
               p++;
          }
          for (l = 1; l <= i; l++)
          {
               cout << p << " ";
               p++;
          }
          sp = sp - 2;
          cout << endl;
     }
     for (i = 1; i <= n * 2 - 1; i++)
     {
          cout << i << " ";
     }
     return 0;
}
