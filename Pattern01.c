//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

#include <stdio.h>
#include <conio.h>

int main()
{
     int n, i, j, k, s;
     scanf("%d", &n);
     s = n - 1;
     for (i = 1; i <= n; i++)
     {
          for (j = s; j >= i; j--)
          {
               printf("  ");
          }
          for (k = 1; k <= i; k++)
          {
               printf("%d ", k);
          }
          printf("\n");
     }
     return 0;
}