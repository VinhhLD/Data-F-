/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int n, i, j;
	printf("Nhap n: "); scanf_s("%d", &n);
	printf("Hinh 1:\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("* ");
			printf("\n");
	}
	printf("Hinh 2:\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf("  ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("* ");
		printf("\n");
	}
	printf("Hinh 3:\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i + 1; j++)
			printf("* ");
			printf("\n");
	}
	return 0;
	getch ();
}*/
