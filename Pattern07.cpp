// 1 2 3 4 5 6 7 8 9
// 1 2 3 4   6 7 8 9
// 1 2 3       7 8 9
// 1 2           8 9
// 1               9

#include <iostream>
using namespace std;

int main()
{
     int i, j, k, l, sp = 1, n, p = 1;
     cout << "Enter the number of rows you want:";
     cin >> n;
     for (i = 1; i <= (n * 2 - 1); i++)
     {
          cout << i << " ";
     }
     cout << endl;
     for (i = 1; i <= n - 1; i++)
     {
          p = 1;
          for (j = n - 1; j >= i; j--)
          {
               cout << p++ << " ";
          }
          for (k = 1; k <= sp; k++)
          {
               cout << "  ";
               p++;
          }
          for (l = n - 1; l >= i; l--)
          {
               cout << p++ << " ";
          }
          sp = sp + 2;
          cout << endl;
     }
     return 0;
}
