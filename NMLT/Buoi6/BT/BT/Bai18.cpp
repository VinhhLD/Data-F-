/*#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main ()
{
	int n, i;
	long double tong = 0.0;
	do
	{
	printf("Nhap n (n > 0): "); scanf_s("%d", &n);
	}
	while (n <= 0);
	for (i = 1; i <= n; i++)
		tong = tong + (float)(1.0 / (i * (i + 1.0) * (i + 2.0)));
	printf("Cong thuc tinh tong: 1 / 1 * 2 * 3 + 1 /  2 * 3 * 4 +  ... + 1 / n * (n + 1) * (n + 2)\n");
	printf("=> Tong tu 1 den %d la: %f\n", n, tong);
	return 0;
	getch ();
}*/