//_ _ _ _ _ _ *
//_ _ _ _ _ * _ *
//_ _ _ _ * _ _ _ *
//_ _ _ * _ _ _ _ _ *
//_ _ * _ _ _ _ _ _ _ *
//_ * _ _ _ _ _ _ _ _ _ *
//* * * * * * * * * * * * *
//_ _ _ _ *
//_ _ _ * _ *
//_ _ * _ _ _ *
//_ * _ _ _ _ _ *
//* * * * * * * * *

//             *
//           *   *
//         *       *
//       *           *
//     *               *
//   *                   *
// * * * * * * * * * * * * *

#include <iostream>
using namespace std;

int main()
{
     int n;
     cout << "Enter number of rows : ";
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
          if (i == n)
          {
               for (int m = 1; m <= 2 * n - 1; m++)
               {
                    cout << "* ";
               }
          }
          else
          {
               for (int j = n - 1; j >= i; j--)
               {
                    cout << "  ";
               }
               cout << "* ";
               for (int k = 1; k <= i - 1; k++)
               {
                    cout << "  ";
               }
               for (int l = 1; l <= i - 2; l++)
               {
                    cout << "  ";
               }
               if (i != 1)
               {
                    cout << "* ";
               }
          }
          cout << endl;
     }
     return 0;
}