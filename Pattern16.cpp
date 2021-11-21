//       *
//     * *
//   * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{
     int i, j, k, n, p, sp;
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
     p = n / 2;
     for (i = 1; i <= n / 2; i++)
     {
          for (k = p; k >= i; k--)
          {
               cout << "* ";
          }
          cout << endl;
     }
     return 0;
}