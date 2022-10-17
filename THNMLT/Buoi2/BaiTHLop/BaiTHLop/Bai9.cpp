/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	int n, i;
	long tich1, tong2, tong3, tong5;
	long double tong4;
	tich1 = 1;
	tong2 = 0;
	tong3 = 0;
	tong4 = 0;
	tong5 = 0;
	do
	{
	printf("Nhap n (n > 0): "); scanf_s("%d", &n);
	}
	while ( n <= 0);
	for (i = 1; i <= n; i++)
	{
		tich1 = tich1 * i;
	}
	printf("1. S = 1 * 2 * 3 * 4 * ... * n\n");
	printf("KQ la: %d\n", tich1);
	for (i = 2; i <= 20; i++)
	{
		if ( i % 2 == 0)
		{
			tong2 = tong2 + i;
		}
	}
	printf("2. S = 2 + 4 + 6 + 8 + ... + 20\n");
	printf("KQ la: %d\n", tong2);
	for (i = 1; i <=n; i++)
	{
		tong3 = tong3 + i * (i + 1);
	}
	printf("3. S = 1 * 2 + 2 * 3 + 3 * 4 + ... + n(n + 1)\n");
	printf("KQ la: %d\n", tong3);
	for (i = 1; i <= n; i++)
	{
		tong4 = tong4 + (1.0 / (i * (i + 1.0) * (i + 2.0)));
	}
	printf("4. S = 1 / 1 * 2 * 3 + 1 /  2 * 3 * 4 +  ... + 1 / n * (n + 1) * (n + 2)\n");
	printf("KQ la: %f\n", tong4);
	for (i = 1; i <= n; i++)
	{
		tong5 = tong5 + (long)(pow(-1.0, i-1) * i);

	}
	printf("5. S = 1 - 2 + 3 - 4 + ... + (-1)^n-1 * n\n");
	printf("KQ la: %d\n", tong5);
	return 0;
	getch ();
}*/