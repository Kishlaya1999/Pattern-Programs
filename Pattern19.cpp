// Asked in daffodil
// 1 2 3 4 17 18 19 20
//   5 6 7 14 15 16
//     8 9 12 13
//       10 11

#include <iostream>
using namespace std;

int main()
{
     int i, j, k, l, d, s, n, p, c = 1;
     cout << "Enter the number of rows :";
     cin >> n;
     p = n;
     d = n * n + 1;
     for (i = 1; i <= n; i++)
     {
          for (j = 1; j <= i - 1; j++)
          {
               cout << "  ";
          }
          for (k = p; k >= 1; k--)
          {
               cout << c << " ";
               c++;
          }
          s = d;
          for (l = p; l >= 1; l--)
          {
               cout << s << " ";
               s++;
          }

          cout << endl;
          p--;
          d = d - (n - i);
     }
     return 0;
}