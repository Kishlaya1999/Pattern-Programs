//       *
//     * *
//   * * *
// * * * *
//   * * *
//     * *
//       *

#include <iostream>
using namespace std;

int main()
{
     int i, j, k, n, sp, p;
     cout << "Enter the number of rows :";
     cin >> n;
     sp = n / 2;
     for (i = 1; i <= n / 2 + 1; i++)
     {
          for (j = sp; j >= i; j--)
          {
               cout << "  ";
          }
          for (k = 1; k <= i; k++)
          {
               cout << "* ";
          }
          // sp--;
          cout << endl;
     }
     sp = 1;
     p = n / 2;
     for (i = 1; i <= n / 2; i++)
     {
          for (j = 1; j <= sp; j++)
          {
               cout << "  ";
          }
          for (k = p; k >= i; k--)
          {
               cout << "* ";
          }
          sp++;
          cout << endl;
     }
     return 0;
}