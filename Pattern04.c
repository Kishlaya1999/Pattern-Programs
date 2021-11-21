//         A
//       A B C
//     A B C D E
//   A B C D E F G
// A B C D E F G H I
#include <stdio.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j, k, n, p = 65, o = 1;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        p = 65;
        for (j = n - 1; j >= i; j--)
        {
            printf("  ");
        }
        for (k = 1; k <= o; k++)
        {
            printf("%c ", p);
            p++;
        }
        printf("\n");
        o = o + 2;
    }
    return 0;
}
