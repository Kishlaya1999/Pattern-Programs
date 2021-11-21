// *
// * *
// * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{
     int i, j, n, p;
     cout << "Enter the number of rows :";
     cin >> n;
     for (i = 1; i <= n / 2 + 1; i++)
     {
          for (j = 1; j <= i; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }
     p = n / 2;
     for (i = 1; i <= n / 2; i++)
     {
          for (j = p; j >= 1; j--)
          {
               cout << "* ";
          }
          p--;
          cout << endl;
     }
     return 0;
}