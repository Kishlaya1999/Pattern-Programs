// * * * *
//  * * * *
//   * * * *
//    * * * *
//     * * * *

#include <iostream>
using namespace std;

int main()
{
     int i, j, n, k, sp = 0;
     cout << "Enter the number of rows :";
     cin >> n;
     for (i = 1; i <= n; i++)
     {
          for (j = 1; j <= sp; j++)
          {
               cout << " ";
          }
          for (k = 1; k <= 4; k++)
          {
               cout << "* ";
          }
          sp = sp + 1;
          cout << endl;
     }
     return 0;
}
