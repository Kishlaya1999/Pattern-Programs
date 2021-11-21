#include <iostream>
using namespace std;

int main()
{
     int i, j, k, sp = 0, n, p;
     cout << "Enter the number of rows:";
     cin >> n;
     p = n;
     for (i = 1; i <= n / 2 + 1; i++)
     {
          for (j = p; j >= 1; j--)
          {
               cout << "*";
          }
          for (k = 1; k <= sp; k++)
          {
               cout << " ";
          }

          cout << endl;
     }

     for (i = 1; i < n / 2; i++)
     {
     }
     return 0;
}
