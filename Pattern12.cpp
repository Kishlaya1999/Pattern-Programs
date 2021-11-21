//     * * * *
//    * * * *
//   * * * *
//  * * * *
// * * * *

#include <iostream>
using namespace std;

int main()
{
     int i, j, k, n, sp;
     cout << "Enter the number of rows :";
     cin >> n;
     sp = n - 1;
     for (i = 1; i <= n; i++)
     {
          for (j = sp; j >= i; j--)
          {
               cout << " ";
          }
          for (k = 1; k <= 4; k++)
          {
               cout << "* ";
          }
          cout << endl;
     }
     return 0;
}