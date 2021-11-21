// * * * * * * * * *
// * * * * _ * * * *
// * * * _ _ _ * * *
// * * _ _ _ _ _ * *
// * _ _ _ _ _ _ _ *
// * * _ _ _ _ _ * *
// * * * _ _ _ * * *
// * * * * _ * * * *
// * * * * * * * * *

#include <iostream>
using namespace std;

int main()
{
     int i, j, k, n, l, sp, p;
     cout << "Enter the number of rows :";
     cin >> n;
     sp = 1;
     p = n / 2;
     for (k = 1; k <= n; k++)
     {
          cout << "* ";
     }
     cout << endl;
     for (i = 1; i <= n / 2; i++)
     {
          for (j = p; j >= i; j--)
          {
               cout << "* ";
          }
          for (k = 1; k <= sp; k++)
          {
               cout << "_ ";
          }
          for (l = p; l >= i; l--)
          {
               cout << "* ";
          }
          sp = sp + 2;
          cout << endl;
     }
     p = 2;
     sp = sp - 4;
     for (i = 1; i <= n / 2 - 1; i++)
     {
          for (j = 1; j <= p; j++)
          {
               cout << "* ";
          }
          for (k = sp; k >= 1; k--)
          {
               cout << "_ ";
          }
          for (l = 1; l <= p; l++)
          {
               cout << "* ";
          }
          p++;
          sp = sp - 2;
          cout << endl;
     }
     for (i = 1; i <= n; i++)
     {
          cout << "* ";
     }

     return 0;
}