// 1 2 3 4 5 6 7 8 9
//   1 2 3 4 5 6 7
//     1 2 3 4 5
//       1 2 3
//         1

#include <conio.h>
#include <stdio.h>

int main()
{
	int i, j, k, n, o, s = 1, p;
	scanf("%d", &n);
	o = n + (n - 1);
	for (i = 1; i <= n; i++)
	{
		p = 1;
		for (j = 1; j <= i - 1; j++)
		{
			printf("  ");
		}
		for (k = o; k >= 1; k--)
		{
			printf("%d ", p);
			p++;
		}
		printf("\n");
		o = o - 2;
	}
}
