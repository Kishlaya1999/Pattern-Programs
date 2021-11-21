// *               *
// * *           * *
// * * *       * * *
// * * * *   * * * *
// * * * * * * * * *
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *

#include <iostream>
using namespace std;

int main()
{
     int i, j, k, n, l, sp, p;
     cout << "Enter the number of rows :";
     cin >> n;
     sp = n - 2;
     for (i = 1; i <= n / 2; i++)
     {
          for (j = 1; j <= i; j++)
          {
               cout << "* ";
          }
          for (k = sp; k >= 1; k--)
          {
               cout << "  ";
          }
          for (l = 1; l <= i; l++)
          {
               cout << "* ";
          }
          sp = sp - 2;
          cout << endl;
     }
     for (i = 1; i <= n; i++)
     {
          cout << "* ";
     }
     cout << endl;
     sp = 1;
     p = n / 2;
     for (i = 1; i <= n / 2; i++)
     {
          for (j = p; j >= i; j--)
          {
               cout << "* ";
          }
          for (k = 1; k <= sp; k++)
          {
               cout << "  ";
          }
          for (l = p; l >= i; l--)
          {
               cout << "* ";
          }
          sp = sp + 2;
          cout << endl;
     }
     return 0;
}