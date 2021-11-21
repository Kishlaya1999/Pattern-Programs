//- - - - - *
//- - - - * * *
//- - - * - * - *
//- - * - - * - - *
//- * - - - * - - - *
//* * * * * * * * * * *
//- * - - - * - - - *
//- - * - - * - - *
//- - - * - * - *
//- - - - * * *
//- - - - - *

//          *
//        * * *
//      *   *   *
//    *     *     *
//  *       *       *
//* * * * * * * * * * *
//  *       *       *
//    *     *     *
//      *   *   *
//        * * *
//          *

#include <iostream>
using namespace std;

int main()
{
     int i, j, k, l, n, sp;
     cout << "Enter the number of rows :";
     cin >> n;
     sp = n / 2;
     for (i = 1; i <= n / 2; i++)
     {
          for (j = n / 2; j >= i; j--)
          {
               cout << "  ";
          }
          if (i != 1)
               cout << "* "; //in first line there would only 1 star
          for (k = 1; k <= i - 2; k++)
          {
               cout << "  ";
          }
          if (i != 1)
               cout << "* ";
          for (l = 1; l <= i - 2; l++)
          {
               cout << "  ";
          }
          cout << "* " << endl;
     }
     for (i = 1; i <= n; i++)
     {
          cout << "* ";
     }
     cout << endl;
     sp = 1;
     for (i = 1; i <= n / 2; i++)
     {
          for (j = 1; j <= i; j++)
          {
               cout << "  ";
          }
          if (i != n / 2)
               cout << "* "; //in last line there would only 1 star
          for (k = n / 2 - 2; k >= i; k--)
          {
               cout << "  ";
          }
          if (i != n / 2)
               cout << "* ";
          for (l = n / 2 - 2; l >= i; l--)
          {
               cout << "  ";
          }
          sp++;
          cout << "* " << endl;
     }
     return 0;
}