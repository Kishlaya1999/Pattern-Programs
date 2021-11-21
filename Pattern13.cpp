#include <iostream>
using namespace std;

int main()
{
     int i, j, k, n, sp = 0, p;
     cout << "Enter the number of rows : ";
     cin >> n;
     p = n;
     for (i = 1; i <= n / 2 + 1; i++)
     {
          for (j = 1; j <= sp; j++)
          {
               cout << "  ";
          }
          for (k = 1; k <= p; k++)
          {
               cout << "* ";
          }
          p = p - 2;
          sp++;
          cout << endl;
     }
     // cout << sp - 2 << endl
     //      << n / 2;
     sp = sp - 2;
     p = 3;
     for (i = 1; i <= n / 2; i++)
     {
          for (j = sp; j >= i; j--)
          {
               cout << "  ";
          }
          for (k = 1; k <= p; k++)
          {
               cout << "* ";
          }
          sp = sp - 1;
          p = p + 2;
          cout << endl;
     }
     return 0;
}