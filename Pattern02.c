//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9

#include <conio.h>
#include <stdio.h>

int main()
{
	int i, j, k, s, o = 1, n;
	scanf("%d", &n);
	s = n - 1;
	for (i = 1; i <= n; i++)
	{
		for (j = s; j >= i; j--)
		{
			printf("  ");
		}
		for (k = 1; k <= o; k++)
		{
			printf("%d ", k);
		}
		printf("\n");
		o = o + 2;
	}
}
